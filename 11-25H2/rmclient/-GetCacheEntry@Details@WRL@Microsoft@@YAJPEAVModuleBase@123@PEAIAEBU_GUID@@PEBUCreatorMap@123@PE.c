/*
 * XREFs of ?GetCacheEntry@Details@WRL@Microsoft@@YAJPEAVModuleBase@123@PEAIAEBU_GUID@@PEBUCreatorMap@123@PEAPEAUIUnknown@@@Z @ 0x18000F950
 * Callers:
 *     ??$GetClassObject@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGAEBU_GUID@@2PEAPEAX@Z @ 0x180014C2C (--$GetClassObject@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGAEBU_GUID@@2PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18001D010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::GetCacheEntry(
        Microsoft::WRL::Details *this,
        struct Microsoft::WRL::Details::ModuleBase *a2,
        unsigned int *a3,
        const struct _GUID *a4,
        _QWORD *Ptr)
{
  _QWORD *v5; // r14
  PVOID v6; // rdi
  RTL_SRWLOCK *v11; // rbx
  void *v12; // rcx
  unsigned int v13; // edi
  __int64 result; // rax
  RTL_SRWLOCK *v15; // rbx
  void *v16; // rcx

  v5 = Ptr;
  v6 = 0LL;
  Ptr = 0LL;
  *v5 = 0LL;
  if ( **(_QWORD **)a4[1].Data4 )
  {
    v11 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 56LL))(this);
    AcquireSRWLockShared(v11);
    v12 = **(void ***)a4[1].Data4;
    if ( v12 )
    {
      Ptr = DecodePointer(v12);
      v13 = (*(__int64 (__fastcall **)(_QWORD *, unsigned int *, _QWORD *))*Ptr)(Ptr, a3, v5);
      if ( v11 )
        ReleaseSRWLockShared(v11);
      return v13;
    }
    if ( v11 )
      ReleaseSRWLockShared(v11);
  }
  result = (*(__int64 (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *, const struct _GUID *, unsigned int *, _QWORD **))&a4->Data1)(
             a2,
             a4,
             a3,
             &Ptr);
  if ( (int)result >= 0 )
  {
    if ( (*(_BYTE *)a2 & 4) != 0 )
      goto LABEL_16;
    v15 = (RTL_SRWLOCK *)(*(__int64 (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)this + 56LL))(this);
    AcquireSRWLockExclusive(v15);
    v16 = **(void ***)a4[1].Data4;
    if ( v16 )
    {
      v6 = DecodePointer(v16);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v6 + 8LL))(v6);
    }
    else
    {
      **(_QWORD **)a4[1].Data4 = EncodePointer(Ptr);
    }
    if ( v15 )
      ReleaseSRWLockExclusive(v15);
    if ( v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*Ptr + 16LL))(Ptr);
      (*(void (__fastcall **)(_QWORD *))(*Ptr + 16LL))(Ptr);
    }
    else
    {
LABEL_16:
      v6 = Ptr;
    }
    *v5 = v6;
    return 0LL;
  }
  return result;
}
