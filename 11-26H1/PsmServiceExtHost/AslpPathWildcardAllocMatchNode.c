/*
 * XREFs of AslpPathWildcardAllocMatchNode @ 0x1800A0760
 * Callers:
 *     AslPathWildcardFindFirst @ 0x18009F358 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x18009F90C (AslPathWildcardFindNext.c)
 * Callees:
 *     AslLogCallPrintf @ 0x18006DFF0 (AslLogCallPrintf.c)
 *     RtlUShortAdd @ 0x18009A074 (RtlUShortAdd.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1800A0AF4 (AslpPathWildcardFreeMatchNode.c)
 *     RtlUnicodeStringCbCatStringN @ 0x1800A0EC8 (RtlUnicodeStringCbCatStringN.c)
 *     RtlUnicodeStringCopy @ 0x1800A0F68 (RtlUnicodeStringCopy.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1800A1030 (RtlUnicodeStringValidateDestWorker.c)
 *     RtlWideCharArrayCopyStringWorker @ 0x1800A10D8 (RtlWideCharArrayCopyStringWorker.c)
 */

__int64 __fastcall AslpPathWildcardAllocMatchNode(
        unsigned __int16 *a1,
        _WORD *a2,
        _WORD *a3,
        int a4,
        __int64 a5,
        unsigned __int16 a6)
{
  int v8; // edi
  int v9; // eax
  const char *v10; // r9
  __int64 v11; // r8
  unsigned int v12; // eax
  PVOID Heap; // rax
  __int16 v14; // bx
  ULONG ShareAccess[2]; // [rsp+20h] [rbp-60h]
  __int64 v17; // [rsp+30h] [rbp-50h] BYREF
  __int64 v18; // [rsp+38h] [rbp-48h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+30h] BYREF

  memset(&ObjectAttributes, 0, 44);
  IoStatusBlock = 0LL;
  *(_QWORD *)a1 = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  while ( 1 )
  {
    *((_QWORD *)a1 + 2) = a3;
    if ( !*a3 )
      break;
    ++a3;
  }
  *((_QWORD *)a1 + 2) = a3 + 1;
  if ( !a3[1] )
  {
    v8 = a4 != 0 ? -1073741638 : -1073741197;
LABEL_28:
    AslpPathWildcardFreeMatchNode(a1);
    return (unsigned int)v8;
  }
  if ( !a4 )
  {
    v8 = -1073741565;
    goto LABEL_28;
  }
  LOWORD(v21) = *a2;
  v9 = RtlUShortAdd(v21, a6, (__int16 *)&v21);
  v8 = v9;
  if ( v9 < 0 )
  {
    v10 = "RtlUShortAdd failed [%x]";
    v11 = 2886LL;
LABEL_27:
    ShareAccess[0] = v9;
    AslLogCallPrintf(1LL, "AslpPathWildcardAllocMatchNode", v11, v10, *(_QWORD *)ShareAccess);
    goto LABEL_28;
  }
  v9 = RtlUShortAdd(v21, 4, (__int16 *)&v21);
  v8 = v9;
  if ( v9 < 0 )
  {
    v10 = "RtlUShortAdd failed [%x]";
    v11 = 2892LL;
    goto LABEL_27;
  }
  v12 = (unsigned __int16)v21;
  a1[1] = v21;
  *a1 = 0;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v12);
  *((_QWORD *)a1 + 1) = Heap;
  if ( !Heap )
  {
    v8 = -1073741801;
    goto LABEL_28;
  }
  v9 = RtlUnicodeStringCopy(a1, a2);
  v8 = v9;
  if ( v9 < 0 )
  {
    v10 = "RtlUnicodeStringCopy failed [%x]";
    v11 = 2907LL;
    goto LABEL_27;
  }
  if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1) - 2) != 92 )
  {
    v17 = 0LL;
    v21 = 0LL;
    v22 = 0LL;
    v8 = RtlUnicodeStringValidateDestWorker(a1, &v17, &v21, &v22);
    if ( v8 >= 0 )
    {
      v14 = v22;
      v18 = 0LL;
      v8 = RtlWideCharArrayCopyStringWorker(
             (int)v17 + 2 * (int)v22,
             (int)v21 - (int)v22,
             (unsigned int)&v18,
             (unsigned int)L"\\",
             0x7FFFLL);
      *a1 = 2 * (v18 + v14);
    }
    if ( v8 < 0 )
    {
      ShareAccess[0] = v8;
      AslLogCallPrintf(
        1LL,
        "AslpPathWildcardAllocMatchNode",
        2923LL,
        "RtlUnicodeStringCatString failed [%x]",
        *(_QWORD *)ShareAccess);
      goto LABEL_28;
    }
  }
  if ( a5 )
  {
    if ( a6 )
    {
      v9 = RtlUnicodeStringCbCatStringN(a1, a5, a6);
      v8 = v9;
      if ( v9 < 0 )
      {
        v10 = "RtlUnicodeStringCbCatStringN failed [%x]";
        v11 = 2931LL;
        goto LABEL_27;
      }
    }
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenFile((PHANDLE)a1 + 3, 0x100001u, &ObjectAttributes, &IoStatusBlock, 1u, 0x21u);
  v8 = v9;
  if ( v9 < 0 )
  {
    v10 = "Failed to open dir [%x]";
    v11 = 2945LL;
    goto LABEL_27;
  }
  return (unsigned int)v8;
}
