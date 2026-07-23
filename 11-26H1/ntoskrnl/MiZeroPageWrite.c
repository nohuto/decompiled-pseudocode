/*
 * XREFs of MiZeroPageWrite @ 0x140466EC8
 * Callers:
 *     MmZeroPageWrite @ 0x140466D8C (MmZeroPageWrite.c)
 *     CcZeroDataOnDisk @ 0x140466E10 (CcZeroDataOnDisk.c)
 * Callees:
 *     IoSynchronousPageWriteEx @ 0x14026AF60 (IoSynchronousPageWriteEx.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     MmUnmapLockedPages @ 0x140280C00 (MmUnmapLockedPages.c)
 *     IopAllocateMdl @ 0x1403A0940 (IopAllocateMdl.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     MiIsRetryIoStatus @ 0x140467310 (MiIsRetryIoStatus.c)
 *     MiRetardMdl @ 0x1404FDE4C (MiRetardMdl.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiZeroPageWrite(struct _FILE_OBJECT *a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r15
  __int64 v6; // r9
  struct _MDL *Mdl; // rbx
  __int64 v8; // rdi
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rdi
  CSHORT MdlFlags; // r12
  CSHORT v12; // r12
  __int64 v13; // rsi
  struct _MDL *v14; // rdx
  unsigned int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r13
  CSHORT v18; // ax
  PVOID *p_Next; // rcx
  __int64 v20; // rdx
  NTSTATUS v21; // r15d
  int v23; // [rsp+40h] [rbp-C0h]
  __int16 v24; // [rsp+48h] [rbp-B8h]
  __int16 Object; // [rsp+50h] [rbp-B0h] BYREF
  char v26; // [rsp+52h] [rbp-AEh]
  char v27; // [rsp+53h] [rbp-ADh]
  int v28; // [rsp+54h] [rbp-ACh]
  _QWORD v29[2]; // [rsp+58h] [rbp-A8h] BYREF
  _QWORD *v30; // [rsp+68h] [rbp-98h]
  _DWORD v31[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h]
  struct _FILE_OBJECT *v33; // [rsp+80h] [rbp-80h]
  struct _MDL MemoryDescriptorList; // [rsp+90h] [rbp-70h] BYREF

  v4 = a3;
  v30 = a2;
  v33 = a1;
  v24 = a3;
  v27 = 0;
  v31[1] = 0;
  memset_0(&MemoryDescriptorList, 0, 0xB0uLL);
  Mdl = 0LL;
  v8 = (unsigned int)v4;
  v9 = (unsigned __int64)(v4 + 4095) >> 12;
  if ( a4 && (unsigned int)v4 > a4 )
    v8 = a4;
  if ( (unsigned int)v8 > 0x10000 )
    Mdl = (struct _MDL *)IopAllocateMdl(0LL, v8, 0, v6, 0LL, 0);
  v10 = (unsigned __int64)(v8 + 4095) >> 12;
  if ( Mdl )
  {
    MdlFlags = Mdl->MdlFlags;
  }
  else
  {
    MdlFlags = 0;
    Mdl = &MemoryDescriptorList;
    if ( (unsigned int)v10 > 0x10 )
      LODWORD(v10) = 16;
  }
  v12 = MdlFlags | 0x4002;
  v23 = 0;
  LODWORD(v13) = v10;
  v14 = Mdl + 1;
  while ( 1 )
  {
    v15 = v9;
    if ( (unsigned int)v13 <= (unsigned int)v9 )
      v15 = v13;
    v13 = v15;
    v16 = v15 << 12;
    if ( (_DWORD)v9 == v15 )
    {
      LODWORD(v10) = v9;
      if ( (v4 & 0xFFF) != 0 )
        v16 = (v4 & 0xFFF | (unsigned int)v16) - 4096;
    }
    v17 = (unsigned int)v16;
    Mdl->ByteCount = v16;
    v18 = 8 * (((unsigned __int64)(v16 + 4095) >> 12) + 6);
    p_Next = (PVOID *)&v14->Next;
    Mdl->Next = 0LL;
    Mdl->Size = v18;
    Mdl->StartVa = 0LL;
    Mdl->ByteOffset = 0;
    Mdl->MdlFlags = v12;
    if ( (_DWORD)v13 )
    {
      v20 = v13;
      do
      {
        *p_Next++ = qword_140E36180[0];
        --v20;
      }
      while ( v20 );
    }
    v29[1] = v29;
    v28 = 0;
    v29[0] = v29;
    v31[0] = 0;
    v32 = 0LL;
    Object = 0;
    v26 = 6;
    v21 = IoSynchronousPageWriteEx(v33, (__int64)Mdl, v30, (__int64)&Object, 0, 0LL, (__int64)v31);
    if ( v21 >= 0 )
    {
      KeWaitForSingleObject(&Object, WrPageOut, 0, 0, 0LL);
      v21 = v31[0];
    }
    if ( _bittest16(&Mdl->MdlFlags, 9u) )
      MiRetardMdl(Mdl);
    if ( (Mdl->MdlFlags & 1) != 0 )
      MmUnmapLockedPages(Mdl->MappedSystemVa, Mdl);
    if ( v21 < 0 )
      break;
    LODWORD(v9) = v9 - v13;
    *v30 += v17;
    if ( v23 )
    {
      --v23;
    }
    else if ( (unsigned int)v13 < (unsigned int)v10 )
    {
      LODWORD(v13) = v10;
    }
LABEL_24:
    v14 = Mdl + 1;
    if ( !(_DWORD)v9 )
      goto LABEL_27;
    LOWORD(v4) = v24;
  }
  v23 = 8;
  if ( (unsigned int)MiIsRetryIoStatus((unsigned int)v21, v17) && (_DWORD)v13 != 1 )
  {
    LODWORD(v13) = (unsigned int)v13 >> 1;
    goto LABEL_24;
  }
LABEL_27:
  if ( Mdl != &MemoryDescriptorList )
    IoFreeMdl(Mdl);
  return (unsigned int)v21;
}
