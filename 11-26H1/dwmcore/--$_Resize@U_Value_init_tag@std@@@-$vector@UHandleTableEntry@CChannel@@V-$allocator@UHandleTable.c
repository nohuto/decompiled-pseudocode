/*
 * XREFs of ??$_Resize@U_Value_init_tag@std@@@?$vector@UHandleTableEntry@CChannel@@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18014FD30
 * Callers:
 *     ?DuplicateSharedResource@CChannel@@UEAAJPEAXW4Enum@DwmResourceType@@_NPEAI@Z @ 0x18014F990 (-DuplicateSharedResource@CChannel@@UEAAJPEAXW4Enum@DwmResourceType@@_NPEAI@Z.c)
 *     ?CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z @ 0x18014FB70 (-CreateResource@CChannel@@UEAAJW4Enum@DwmResourceType@@PEAI@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAXPEAUHandleTableEntry@CChannel@@QEAU12@AEAV?$allocator@UHandleTableEntry@CChannel@@@0@@Z @ 0x18014FEEC (--$_Destroy_range@V-$allocator@UHandleTableEntry@CChannel@@@std@@@std@@YAXPEAUHandleTableEntry@C.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UHandleTableEntry@CChannel@@V?$allocator@UHandleTableEntry@CChannel@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18014FF28 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UHandleTableEntry@CChannel@@V-$allocator@U.c)
 */

__int64 __fastcall std::vector<CChannel::HandleTableEntry>::_Resize<std::_Value_init_tag>(
        __int64 *a1,
        unsigned __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // r8
  unsigned __int64 v5; // rcx
  unsigned __int64 i; // rdx
  __int64 result; // rax
  __int64 v8; // rbx

  v2 = (_QWORD *)a1[1];
  v4 = *a1;
  v5 = ((__int64)v2 - *a1) >> 4;
  if ( a2 < v5 )
  {
    v8 = v4 + 16 * a2;
    result = std::_Destroy_range<std::allocator<CChannel::HandleTableEntry>>(v8, v2);
    a1[1] = v8;
  }
  else if ( a2 > v5 )
  {
    if ( a2 > (a1[2] - v4) >> 4 )
    {
      return std::vector<CChannel::HandleTableEntry>::_Resize_reallocate<std::_Value_init_tag>(a1);
    }
    else
    {
      for ( i = a2 - v5; i; --i )
      {
        *v2 = 0LL;
        v2[1] = 0LL;
        v2 += 2;
      }
      result = std::_Destroy_range<std::allocator<CChannel::HandleTableEntry>>(v2, v2);
      a1[1] = (__int64)v2;
    }
  }
  return result;
}
