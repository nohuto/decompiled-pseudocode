/*
 * XREFs of _lambda_cf61730e764cafb5fbe53142b0d3259b_::operator() @ 0x140161170
 * Callers:
 *     KRegKey::QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___ @ 0x140160B80 (KRegKey--QueryValueBlob__lambda_cf61730e764cafb5fbe53142b0d3259b___.c)
 * Callees:
 *     ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x140070F10 (-reserve@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK.c)
 *     ?AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z @ 0x140161230 (-AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z.c)
 */

__int64 __fastcall lambda_cf61730e764cafb5fbe53142b0d3259b_::operator()(
        Ndis::BindStack **a1,
        __int64 a2,
        unsigned int a3)
{
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  __int64 i; // rbx
  Ndis::BindStack *v8; // rcx

  v5 = a3 / 0x12uLL;
  if ( a3 != 18 * v5 )
    return 3221225485LL;
  if ( (unsigned int)v5 > 0x80 )
    return 3221226539LL;
  if ( !Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::reserve(
          &(*a1)->Filters.m_bufferSize,
          (unsigned int)v5) )
    return 3221225626LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v8 = *a1;
    if ( (unsigned int)i >= (unsigned int)v5 )
      break;
    result = Ndis::BindStack::AddStaticFilterBinding(
               v8,
               (const struct _GUID *)(a2 + 18 * i),
               *(unsigned __int16 *)(a2 + 18 * i + 16));
    if ( (_DWORD)result )
      return result;
  }
  ++v8->ChangeEpoch;
  return 0LL;
}
