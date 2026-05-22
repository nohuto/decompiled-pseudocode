/*
 * XREFs of ?GetMarshalSizeMax@FtmBase@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAXK1KPEAK@Z @ 0x1800BDE20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::FtmBase::GetMarshalSizeMax(
        Microsoft::WRL::FtmBase *this,
        const struct _GUID *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        unsigned int *a7)
{
  __int64 v7; // rcx

  v7 = *((_QWORD *)this + 3);
  if ( v7 )
    return (*(__int64 (__fastcall **)(__int64, const struct _GUID *, void *, _QWORD, void *, unsigned int, unsigned int *))(*(_QWORD *)v7 + 32LL))(
             v7,
             a2,
             a3,
             a4,
             a5,
             a6,
             a7);
  else
    return 2147942414LL;
}
