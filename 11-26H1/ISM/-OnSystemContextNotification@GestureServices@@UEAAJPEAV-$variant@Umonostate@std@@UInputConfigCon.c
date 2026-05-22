/*
 * XREFs of ?OnSystemContextNotification@GestureServices@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x18006DF80
 * Callers:
 *     ??0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x1800262D8 (--0GestureServices@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 * Callees:
 *     ??$copy@PEAUINPUT_SPACE_REGION@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UINPUT_SPACE_REGION@@@std@@@std@@@std@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UINPUT_SPACE_REGION@@@std@@@std@@@0@PEAUINPUT_SPACE_REGION@@0V10@@Z @ 0x18006E2EC (--$copy@PEAUINPUT_SPACE_REGION@@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UINPUT_SPACE.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@YAPEAUINPUT_SPACE_REGION@@PEAU1@_KAEAV?$allocator@UINPUT_SPACE_REGION@@@0@@Z @ 0x18006E334 (--$_Uninitialized_value_construct_n@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@@YAPEAUINPUT_SP.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18006E370 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_S.c)
 */

__int64 __fastcall GestureServices::OnSystemContextNotification(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  char v8; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 && *(_BYTE *)(a2 + 24) == 1 )
  {
    v2 = (_QWORD *)(a1 + 56);
    if ( *(_DWORD *)a2 )
    {
      v3 = *(_QWORD *)(a2 + 8);
      v4 = 0x8F5C28F5C28F5C29uLL * ((__int64)(*(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 56)) >> 3);
      v5 = *(unsigned int *)(v3 + 12);
      if ( v5 < v4 )
      {
        v6 = *v2 + 200 * v5;
      }
      else
      {
        if ( v5 <= v4 )
        {
LABEL_9:
          std::copy<INPUT_SPACE_REGION *,std::_Vector_iterator<std::_Vector_val<std::_Simple_types<INPUT_SPACE_REGION>>>>(
            &v8,
            *(_QWORD *)(v3 + 16),
            *(_QWORD *)(v3 + 16) + 200LL * *(unsigned int *)(v3 + 12),
            *v2);
          return 0LL;
        }
        if ( v5 > 0x8F5C28F5C28F5C29uLL * ((__int64)(v2[2] - *v2) >> 3) )
        {
          std::vector<INPUT_SPACE_REGION>::_Resize_reallocate<std::_Value_init_tag>(v2);
          goto LABEL_9;
        }
        v6 = std::_Uninitialized_value_construct_n<std::allocator<INPUT_SPACE_REGION>>(v2[1], v5 - v4);
      }
      v2[1] = v6;
      goto LABEL_9;
    }
    if ( *(_QWORD *)(a1 + 56) != *(_QWORD *)(a1 + 64) )
      *(_QWORD *)(a1 + 64) = *v2;
  }
  return 0LL;
}
