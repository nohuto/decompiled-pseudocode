/*
 * XREFs of IopGetLegacyVetoListDrivers @ 0x14094522C
 * Callers:
 *     ExpQueryLegacyDriverInformation @ 0x14077038C (ExpQueryLegacyDriverInformation.c)
 *     IoGetLegacyVetoList @ 0x140944C40 (IoGetLegacyVetoList.c)
 *     PopFilterCapabilities @ 0x140944D5C (PopFilterCapabilities.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     RtlStringCbPrintfW @ 0x140433060 (RtlStringCbPrintfW.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x140723EF0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x140725DD0 (ZwQueryDirectoryObject.c)
 *     IopAppendLegacyVeto @ 0x1407B21C4 (IopAppendLegacyVeto.c)
 *     ObReferenceObjectByName @ 0x1408F2260 (ObReferenceObjectByName.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopGetLegacyVetoListDrivers(__int64 a1)
{
  _QWORD *Pool2; // rdi
  char v3; // r15
  NTSTATUS v4; // ecx
  wchar_t *v5; // rax
  int DirectoryObject; // eax
  unsigned __int16 v7; // ax
  unsigned __int16 v8; // si
  wchar_t *v9; // rcx
  PVOID v10; // rsi
  __int64 v11; // [rsp+20h] [rbp-59h]
  PVOID Object; // [rsp+40h] [rbp-39h] BYREF
  NTSTRSAFE_PWSTR pszDest[2]; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v14[2]; // [rsp+58h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-11h] BYREF
  int v16; // [rsp+E8h] [rbp+6Fh] BYREF
  int v17; // [rsp+F0h] [rbp+77h] BYREF
  HANDLE DirectoryHandle; // [rsp+F8h] [rbp+7Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  Object = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v14[1] = L"\\Driver";
  v14[0] = 1048590LL;
  v16 = 0;
  v17 = 0;
  DirectoryHandle = 0LL;
  Pool2 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v3 = 1;
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
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      LODWORD(pszDest[0]) = 12320768;
      v5 = (wchar_t *)ExAllocatePool2(0x100uLL);
      pszDest[1] = v5;
      if ( v5 )
      {
        *v5 = 0;
        while ( 1 )
        {
          LOBYTE(v11) = v3;
          DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)Pool2);
          if ( DirectoryObject == -1073741789 )
          {
            ExFreePoolWithTag(Pool2, 0);
            Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
            if ( !Pool2 )
              goto LABEL_13;
            LOBYTE(v11) = v3;
            DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)Pool2);
          }
          v3 = 0;
          if ( DirectoryObject < 0 )
            break;
          v7 = WORD1(pszDest[0]);
          v8 = *(_WORD *)Pool2 + 18;
          v9 = pszDest[1];
          if ( v8 > WORD1(pszDest[0]) )
          {
            ExFreePoolWithTag(pszDest[1], 0);
            WORD1(pszDest[0]) = v8;
            pszDest[1] = (NTSTRSAFE_PWSTR)ExAllocatePool2(0x100uLL);
            v9 = pszDest[1];
            if ( !pszDest[1] )
              goto LABEL_13;
            v7 = WORD1(pszDest[0]);
          }
          LOWORD(pszDest[0]) = v8 - 2;
          RtlStringCbPrintfW(v9, v7, L"\\Driver\\%ws", Pool2[1], v11, &v17, &v16);
          if ( (int)ObReferenceObjectByName((__int64)pszDest, 576, 0LL, 0, (__int64)IoDriverObjectType, 0, 0LL, &Object) >= 0 )
          {
            v10 = Object;
            if ( (*((_DWORD *)Object + 4) & 0x40) != 0 )
            {
              **(_DWORD **)(a1 + 16) = 11;
              if ( *(_QWORD *)a1 )
                IopAppendLegacyVeto((const void ***)a1, (const void **)Pool2);
            }
            ObfDereferenceObject(v10);
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
