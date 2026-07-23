/*
 * XREFs of IopGetLegacyVetoListDrivers @ 0x1409C0B9C
 * Callers:
 *     ExpQueryLegacyDriverInformation @ 0x14077338C (ExpQueryLegacyDriverInformation.c)
 *     IoGetLegacyVetoList @ 0x1409C05B0 (IoGetLegacyVetoList.c)
 *     PopFilterCapabilities @ 0x1409C06CC (PopFilterCapabilities.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlStringCbPrintfW @ 0x140420090 (RtlStringCbPrintfW.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x140728AC0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14072A9A0 (ZwQueryDirectoryObject.c)
 *     IopAppendLegacyVeto @ 0x1407B5224 (IopAppendLegacyVeto.c)
 *     ObReferenceObjectByName @ 0x1408F8820 (ObReferenceObjectByName.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopGetLegacyVetoListDrivers(__int64 a1)
{
  _QWORD *Pool2; // rdi
  BOOLEAN RestartScan; // r15
  NTSTATUS v4; // ecx
  ULONG v5; // r14d
  wchar_t *v6; // rax
  NTSTATUS v7; // eax
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // si
  wchar_t *v10; // rcx
  PVOID v11; // rsi
  PVOID Object; // [rsp+40h] [rbp-39h] BYREF
  NTSTRSAFE_PWSTR pszDest[2]; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v14[2]; // [rsp+58h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-11h] BYREF
  ULONG Length; // [rsp+E8h] [rbp+6Fh] BYREF
  ULONG Context; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE DirectoryHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  Object = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v14[1] = L"\\Driver";
  v14[0] = 1048590LL;
  Length = 0;
  Context = 0;
  DirectoryHandle = 0LL;
  Pool2 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  RestartScan = 1;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v14;
  *(_OWORD *)pszDest = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  if ( v4 < 0 )
  {
    **(_DWORD **)(a1 + 24) = v4;
  }
  else
  {
    v5 = 202;
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      LODWORD(pszDest[0]) = 12320768;
      v6 = (wchar_t *)ExAllocatePool2(0x100uLL);
      pszDest[1] = v6;
      if ( v6 )
      {
        *v6 = 0;
        while ( 1 )
        {
          v7 = ZwQueryDirectoryObject(DirectoryHandle, Pool2, v5, 1u, RestartScan, &Context, &Length);
          if ( v7 == -1073741789 )
          {
            v5 = Length;
            ExFreePoolWithTag(Pool2, 0);
            Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
            if ( !Pool2 )
              goto LABEL_13;
            v7 = ZwQueryDirectoryObject(DirectoryHandle, Pool2, v5, 1u, RestartScan, &Context, &Length);
          }
          RestartScan = 0;
          if ( v7 < 0 )
            break;
          v8 = WORD1(pszDest[0]);
          v9 = *(_WORD *)Pool2 + 18;
          v10 = pszDest[1];
          if ( v9 > WORD1(pszDest[0]) )
          {
            ExFreePoolWithTag(pszDest[1], 0);
            WORD1(pszDest[0]) = v9;
            pszDest[1] = (NTSTRSAFE_PWSTR)ExAllocatePool2(0x100uLL);
            v10 = pszDest[1];
            if ( !pszDest[1] )
              goto LABEL_13;
            v8 = WORD1(pszDest[0]);
          }
          LOWORD(pszDest[0]) = v9 - 2;
          RtlStringCbPrintfW(v10, v8, L"\\Driver\\%ws", Pool2[1]);
          if ( (int)ObReferenceObjectByName((__int64)pszDest, 576, 0LL, 0, (__int64)IoDriverObjectType, 0, 0LL, &Object) >= 0 )
          {
            v11 = Object;
            if ( (*((_DWORD *)Object + 4) & 0x40) != 0 )
            {
              **(_DWORD **)(a1 + 16) = 11;
              if ( *(_QWORD *)a1 )
                IopAppendLegacyVeto((const void ***)a1, (const void **)Pool2);
            }
            ObfDereferenceObject(v11);
            if ( **(_DWORD **)(a1 + 16) == 11 && !*(_QWORD *)a1 )
              break;
            if ( **(int **)(a1 + 24) < 0 )
              break;
          }
        }
      }
      else
      {
LABEL_13:
        **(_DWORD **)(a1 + 24) = -1073741670;
      }
    }
    else
    {
      **(_DWORD **)(a1 + 24) = -1073741670;
    }
  }
  if ( pszDest[1] )
    ExFreePoolWithTag(pszDest[1], 0);
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0);
  if ( DirectoryHandle )
    ZwClose(DirectoryHandle);
}
