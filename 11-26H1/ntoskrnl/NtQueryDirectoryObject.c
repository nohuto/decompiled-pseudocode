/*
 * XREFs of NtQueryDirectoryObject @ 0x1409DEC60
 * Callers:
 *     DifNtQueryDirectoryObjectWrapper @ 0x140685910 (DifNtQueryDirectoryObjectWrapper.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     ObpLockDirectoryShared @ 0x1409DEF00 (ObpLockDirectoryShared.c)
 *     ObpUnlockDirectory @ 0x1409DF250 (ObpUnlockDirectory.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryDirectoryObject(
        HANDLE DirectoryHandle,
        PVOID Buffer,
        ULONG Length,
        BOOLEAN ReturnSingleEntry,
        BOOLEAN RestartScan,
        PULONG Context,
        PULONG ReturnLength)
{
  ULONG v7; // r14d
  KPROCESSOR_MODE PreviousMode; // di
  int v10; // ebx
  PULONG v11; // r12
  PULONG v12; // r13
  const void **Pool2; // rsi
  int v14; // edi
  unsigned int v15; // r15d
  unsigned int v16; // edx
  int v17; // ecx
  _QWORD *i; // r9
  int v19; // r11d
  int v20; // eax
  const void **v21; // rdx
  int v22; // eax
  __int64 v24; // rdi
  __int64 v25; // rcx
  char *v26; // rbx
  const void **v27; // r13
  int ULongFromUser; // eax
  int v29; // eax
  unsigned __int16 v30; // ax
  unsigned int v31; // r10d
  unsigned __int8 v32; // r11
  unsigned __int8 v33; // r15
  __int64 v34; // rax
  char *v35; // rbx
  __int64 v36; // rax
  KPROCESSOR_MODE v37; // [rsp+30h] [rbp-B8h]
  int v38; // [rsp+34h] [rbp-B4h]
  int v39; // [rsp+34h] [rbp-B4h]
  int v40; // [rsp+38h] [rbp-B0h]
  unsigned int v41; // [rsp+40h] [rbp-A8h]
  unsigned int v42; // [rsp+44h] [rbp-A4h]
  const void **v43; // [rsp+48h] [rbp-A0h]
  PVOID Object; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int64 v45; // [rsp+58h] [rbp-90h]
  int v46; // [rsp+60h] [rbp-88h]
  __int64 v47; // [rsp+68h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-70h] BYREF
  const void **v49; // [rsp+88h] [rbp-60h]
  __int128 v50; // [rsp+90h] [rbp-58h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-48h]

  v7 = Length;
  DestinationString = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v37 = PreviousMode;
  v10 = 0;
  if ( PreviousMode )
  {
    ProbeForWrite(Buffer, Length, 2u);
    v12 = Context;
    ULongFromUser = RtlReadULongFromUser(Context);
    RtlWriteULongToUser(Context, ULongFromUser);
    v11 = ReturnLength;
    if ( ReturnLength )
    {
      v29 = RtlReadULongFromUser(ReturnLength);
      RtlWriteULongToUser(ReturnLength, v29);
    }
    if ( RestartScan )
    {
      v46 = 0;
    }
    else
    {
      v10 = RtlReadULongFromUser(Context);
      v46 = v10;
    }
  }
  else
  {
    v11 = ReturnLength;
    v12 = Context;
    if ( !RestartScan )
      v10 = *Context;
  }
  if ( v7 >= v7 + 32 )
    return -1073741811;
  Pool2 = (const void **)ExAllocatePool2(0x101uLL);
  v49 = Pool2;
  if ( !Pool2 )
    return -1073741670;
  Object = 0LL;
  v14 = ObReferenceObjectByHandle(DirectoryHandle, 1u, ObpDirectoryObjectType, PreviousMode, &Object, 0LL);
  if ( v14 >= 0 )
  {
    v43 = Pool2;
    v15 = 32;
    v40 = 0;
    v38 = 0;
    v14 = -2147483622;
    ObpLockDirectoryShared(&v50);
    v16 = 0;
    v17 = 0;
LABEL_8:
    v41 = v16;
    if ( v16 < 0x25 )
    {
      for ( i = (_QWORD *)*((_QWORD *)Object + v16); ; i = (_QWORD *)*i )
      {
        v45 = (unsigned __int64)i;
        v42 = v15;
        v19 = v17;
        LODWORD(v47) = v17;
        if ( !i )
        {
          v16 = v41 + 1;
          goto LABEL_8;
        }
        v20 = v17++;
        v40 = v17;
        if ( v10 == v20 )
        {
          v24 = i[1];
          if ( (*(_BYTE *)(v24 - 22) & 2) != 0 )
            v25 = v24 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v24 - 22) & 3];
          else
            v25 = 0LL;
          if ( v25 )
          {
            DestinationString = *(UNICODE_STRING *)(v25 + 8);
          }
          else
          {
            RtlInitUnicodeString(&DestinationString, 0LL);
            i = (_QWORD *)v45;
            v19 = v47;
          }
          v47 = (unsigned __int8)((unsigned __int16)(v24 - 48) >> 8);
          v45 = (unsigned __int8)ObHeaderCookie;
          v30 = DestinationString.Length;
          v31 = DestinationString.Length
              + 36
              + *(unsigned __int16 *)(ObTypeIndexTable[v47 ^ (unsigned __int8)ObHeaderCookie ^ (unsigned __int64)*(unsigned __int8 *)(v24 - 24)]
                                    + 16)
              + v15;
          v21 = v43;
          if ( v15 > v31 )
          {
            v14 = 261;
            v40 = v19;
            goto LABEL_15;
          }
          if ( v31 > v7 )
          {
            v40 = v19;
            v14 = ReturnSingleEntry != 0 ? -1073741789 : 261;
            v15 = v31;
            if ( !ReturnSingleEntry )
              v15 = v42;
            goto LABEL_15;
          }
          *(_WORD *)v43 = DestinationString.Length;
          *((_WORD *)v43 + 1) = v30 + 2;
          v43[1] = DestinationString.Buffer;
          v32 = v45;
          v33 = v47;
          *((_WORD *)v43 + 8) = *(_WORD *)(ObTypeIndexTable[*(unsigned __int8 *)(v24 - 24) ^ (unsigned __int8)v47 ^ (unsigned __int64)(unsigned __int8)v45]
                                         + 16);
          *((_WORD *)v43 + 9) = *(_WORD *)(ObTypeIndexTable[*(unsigned __int8 *)(v24 - 24) ^ v33 ^ (unsigned __int64)v32]
                                         + 16)
                              + 2;
          v43[3] = *(const void **)(ObTypeIndexTable[*(unsigned __int8 *)(v24 - 24) ^ v33 ^ (unsigned __int64)v32] + 24);
          v14 = 0;
          v15 = v31;
          v21 = v43 + 4;
          v43 += 4;
          v22 = ++v38;
          if ( ReturnSingleEntry )
            goto LABEL_16;
          ++v10;
          v17 = v40;
        }
      }
    }
    v21 = v43;
LABEL_15:
    v22 = v38;
LABEL_16:
    if ( v14 >= 0 )
    {
      *(_OWORD *)v21 = 0LL;
      *((_OWORD *)v21 + 1) = 0LL;
      v26 = (char *)(v21 + 4);
      if ( v22 )
      {
        v27 = Pool2 + 3;
        do
        {
          v39 = v22 - 1;
          memmove(v26, *(v27 - 2), *((unsigned __int16 *)v27 - 12));
          *(v27 - 2) = (char *)Buffer + v26 - (char *)Pool2;
          v34 = *((unsigned __int16 *)v27 - 12);
          *(_WORD *)&v26[v34] = 0;
          v35 = &v26[v34];
          memmove(v35 + 2, *v27, *((unsigned __int16 *)v27 - 4));
          *v27 = (char *)Buffer + v35 + 2 - (char *)Pool2;
          v36 = *((unsigned __int16 *)v27 - 4);
          *(_WORD *)&v35[v36 + 2] = 0;
          v26 = &v35[v36 + 4];
          v27 += 4;
          v22 = v39;
        }
        while ( v39 );
        v7 = Length;
        v11 = ReturnLength;
        v12 = Context;
      }
    }
    ObpUnlockDirectory(&v50);
    if ( v15 <= v7 )
      v7 = v15;
    if ( v37 )
      RtlCopyToUser(Buffer, Pool2, v7);
    else
      RtlCopyVolatileMemory(Buffer, Pool2, v7);
    if ( v11 )
    {
      if ( v37 )
        RtlWriteULongToUser(v11, v15);
      else
        *v11 = v15;
    }
    if ( v14 >= 0 )
    {
      if ( v37 )
        RtlWriteULongToUser(v12, v40);
      else
        *v12 = v40;
    }
    ObfDereferenceObject(Object);
  }
  ExFreePoolWithTag(Pool2, 0);
  return v14;
}
