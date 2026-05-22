/*
 * XREFs of ?OnSystemContextNotification@DWMCursorBroker@@UEAAJPEAV?$variant@Umonostate@std@@UInputConfigContextMessage@@UDisplayOcclusionContextMessage@@UVirtualTouchpadContextMessage@@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@std@@@Z @ 0x18006E040
 * Callers:
 *     <none>
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180010150 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ?OnInputConfigUpdated@DWMCursorBroker@@AEAAJXZ @ 0x18006E170 (-OnInputConfigUpdated@DWMCursorBroker@@AEAAJXZ.c)
 *     ??$copy@PEAUINPUT_SPACE_REGION@@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UINPUT_SPACE_REGION@@@std@@@std@@@std@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@UINPUT_SPACE_REGION@@@std@@@std@@@0@PEAUINPUT_SPACE_REGION@@0V10@@Z @ 0x18006E2EC (--$copy@PEAUINPUT_SPACE_REGION@@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@UINPUT_SPACE.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@YAPEAUINPUT_SPACE_REGION@@PEAU1@_KAEAV?$allocator@UINPUT_SPACE_REGION@@@0@@Z @ 0x18006E334 (--$_Uninitialized_value_construct_n@V-$allocator@UINPUT_SPACE_REGION@@@std@@@std@@YAPEAUINPUT_SP.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UINPUT_SPACE_REGION@@V?$allocator@UINPUT_SPACE_REGION@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18006E370 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UINPUT_SPACE_REGION@@V-$allocator@UINPUT_S.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F7EC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMCursorBroker::OnSystemContextNotification(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rdi
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v13; // [rsp+50h] [rbp+18h] BYREF

  std::_Mutex_base::lock((std::_Mutex_base *)&DWMCursorBroker::s_lock);
  if ( !a2 || *(_BYTE *)(a2 + 24) != 1 )
    goto LABEL_12;
  v4 = a1 + 58;
  if ( !*(_DWORD *)a2 )
  {
    if ( a1[58] != a1[59] )
      a1[59] = *v4;
    goto LABEL_10;
  }
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(unsigned int *)(v5 + 12);
  v7 = 0x8F5C28F5C28F5C29uLL * ((__int64)(a1[59] - a1[58]) >> 3);
  if ( v6 < v7 )
  {
    v8 = *v4 + 200 * v6;
LABEL_8:
    a1[59] = v8;
    goto LABEL_9;
  }
  if ( v6 > v7 )
  {
    if ( v6 > 0x8F5C28F5C28F5C29uLL * ((__int64)(a1[60] - a1[58]) >> 3) )
    {
      std::vector<INPUT_SPACE_REGION>::_Resize_reallocate<std::_Value_init_tag>(a1 + 58);
      goto LABEL_9;
    }
    v8 = std::_Uninitialized_value_construct_n<std::allocator<INPUT_SPACE_REGION>>(a1[59], v6 - v7);
    goto LABEL_8;
  }
LABEL_9:
  std::copy<INPUT_SPACE_REGION *,std::_Vector_iterator<std::_Vector_val<std::_Simple_types<INPUT_SPACE_REGION>>>>(
    &v13,
    *(_QWORD *)(v5 + 16),
    *(_QWORD *)(v5 + 16) + 200LL * *(unsigned int *)(v5 + 12),
    *v4);
LABEL_10:
  v9 = DWMCursorBroker::OnInputConfigUpdated((DWMCursorBroker *)(a1 - 2));
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x39C,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\lib\\dwmcursorbroker.cpp",
      (const char *)(unsigned int)v9,
      v11);
LABEL_12:
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  return 0LL;
}
