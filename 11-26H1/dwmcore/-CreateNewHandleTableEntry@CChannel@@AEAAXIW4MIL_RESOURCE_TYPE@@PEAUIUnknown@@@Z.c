/*
 * XREFs of ?CreateNewHandleTableEntry@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@PEAUIUnknown@@@Z @ 0x18014FDD0
 * Callers:
 *     ?CreateSharedResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAIPEAPEAX@Z @ 0x180232B40 (-CreateSharedResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAIPEAPEAX@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAXPEAUHandleTableEntry@CChannel@@QEAU12@AEAV?$allocator@UHandleTableEntry@CChannel@@@0@@Z @ 0x18014FEEC (--$_Destroy_range@V-$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAXPEAUHandleTableEntry@C.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UHandleTableEntry@CChannel@@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18014FF28 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UHandleTableEntry@CChannel@@V-$allocator@U.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1802014E4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::CreateNewHandleTableEntry(_QWORD *a1, unsigned int a2, int a3, const char *a4)
{
  __int64 v5; // rdi
  __int64 *v6; // r14
  __int64 v7; // r10
  _QWORD *v10; // rbx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 i; // rcx
  __int64 result; // rax
  __int64 v15; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v5 = 2LL * (a2 - 1);
  v6 = a1 + 2;
  v7 = a1[2];
  if ( a2
    && a2 <= (unsigned __int64)((a1[3] - v7) >> 4)
    && *(_DWORD *)(v7 + 16LL * (a2 - 1))
    && *(_DWORD *)(v7 + 16LL * (a2 - 1) + 4) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x82D,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      a4);
  }
  v10 = (_QWORD *)a1[3];
  v11 = a2;
  v12 = (a1[3] - v7) >> 4;
  if ( v11 > v12 )
  {
    if ( v11 > (v6[2] - v7) >> 4 )
    {
      std::vector<CChannel::HandleTableEntry>::_Resize_reallocate<std::_Value_init_tag>(v6);
    }
    else
    {
      for ( i = v11 - v12; i; --i )
      {
        *v10 = 0LL;
        v10[1] = 0LL;
        v10 += 2;
      }
      std::_Destroy_range<std::allocator<CChannel::HandleTableEntry>>(v10, v10);
      v6[1] = (__int64)v10;
    }
  }
  result = *v6;
  *(_DWORD *)(result + 8 * v5) = 1;
  *(_DWORD *)(result + 8 * v5 + 4) = a3;
  v15 = *(_QWORD *)(result + 8 * v5 + 8);
  *(_QWORD *)(result + 8 * v5 + 8) = a4;
  if ( v15 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  ++a1[5];
  return result;
}
