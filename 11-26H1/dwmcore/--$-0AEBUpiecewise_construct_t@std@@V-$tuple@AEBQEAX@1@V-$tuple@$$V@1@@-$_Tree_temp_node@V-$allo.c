/*
 * XREFs of ??$?0AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAX@1@V?$tuple@$$V@1@@?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@std@@@std@@QEAA@AEAV?$allocator@U?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAX@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1801D93D0
 * Callers:
 *     ??$_Try_emplace@AEBQEAX$$V@?$map@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@_N@1@AEBQEAX@Z @ 0x180115EA8 (--$_Try_emplace@AEBQEAX$$V@-$map@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUD.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??$?0AEBQEAX$$Z$$V@?$pair@QEAXUDEVICE_INFO@@@std@@QEAA@Upiecewise_construct_t@1@V?$tuple@AEBQEAX@1@V?$tuple@$$V@1@@Z @ 0x1801D945C (--$-0AEBQEAX$$Z$$V@-$pair@QEAXUDEVICE_INFO@@@std@@QEAA@Upiecewise_construct_t@1@V-$tuple@AEBQEAX.c)
 */

_QWORD *std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *>>>::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<void * const,DEVICE_INFO>,void *>>>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  char *v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // rcx
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF
  va_list va; // [rsp+48h] [rbp+20h]
  __int64 *v11; // [rsp+50h] [rbp+28h]
  va_list va1; // [rsp+58h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v9 = va_arg(va1, _QWORD);
  v11 = va_arg(va1, __int64 *);
  *a1 = a2;
  a1[1] = 0LL;
  v5 = (char *)operator new(0x60uLL);
  v6 = v11;
  a1[1] = v5;
  v9 = *v6;
  ____0AEBQEAX__Z__V___pair_QEAXUDEVICE_INFO___std__QEAA_Upiecewise_construct_t_1_V__tuple_AEBQEAX_1_V__tuple___V_1__Z(
    v5 + 32,
    v6,
    (__int64 *)va);
  *(_QWORD *)a1[1] = a3;
  v7 = 0LL;
  *(_QWORD *)(a1[1] + 8LL) = a3;
  *(_QWORD *)(a1[1] + 16LL) = a3;
  do
    *(_BYTE *)(a1[1] + v7++ + 24) = 0;
  while ( v7 < 2 );
  return a1;
}
