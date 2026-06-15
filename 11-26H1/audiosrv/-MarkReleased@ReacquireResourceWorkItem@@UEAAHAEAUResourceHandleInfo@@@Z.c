/*
 * XREFs of ?MarkReleased@ReacquireResourceWorkItem@@UEAAHAEAUResourceHandleInfo@@@Z @ 0x1800F4130
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 */

__int64 __fastcall ReacquireResourceWorkItem::MarkReleased(
        ReacquireResourceWorkItem *this,
        struct ResourceHandleInfo *a2)
{
  __int64 v2; // rax
  __int64 *v4; // rcx

  v2 = *((_QWORD *)a2 + 56);
  if ( !v2 )
    return 0LL;
  v4 = (__int64 *)((char *)this + 480);
  if ( v2 != *v4 )
    return 0LL;
  *((_DWORD *)this + 122) = 1;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(v4);
  return 1LL;
}
