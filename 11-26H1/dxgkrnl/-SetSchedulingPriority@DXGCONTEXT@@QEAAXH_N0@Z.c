/*
 * XREFs of ?SetSchedulingPriority@DXGCONTEXT@@QEAAXH_N0@Z @ 0x140192EFC
 * Callers:
 *     ?SetApiSchedulingPriority@DXGCONTEXT@@QEAAJH@Z @ 0x140075918 (-SetApiSchedulingPriority@DXGCONTEXT@@QEAAJH@Z.c)
 *     ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N0@Z @ 0x1403E4130 (-UpdatePriorityClass@DXGDEVICE@@QEAAX_N0@Z.c)
 *     ?SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z @ 0x1403EEBD4 (-SetSchedulingPriorityAdjustment@DXGDEVICE@@QEAAXH@Z.c)
 * Callees:
 *     ?GetDefaultQos@DXGPROCESS@@QEBA?AW4_KHETERO_CPU_QOS@@XZ @ 0x140074A64 (-GetDefaultQos@DXGPROCESS@@QEBA-AW4_KHETERO_CPU_QOS@@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DXGCONTEXT::SetSchedulingPriority(DXGCONTEXT *this, unsigned int a2)
{
  __int64 v4; // rcx
  int DefaultQos; // eax
  __int64 v6; // r8
  char v7; // r11
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rdx
  void (__fastcall *v11)(__int64, _QWORD, __int64, __int64, int, char); // r10
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  char v15; // [rsp+28h] [rbp-20h]

  if ( !*((_BYTE *)this + 434) )
  {
    v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 40LL);
    if ( (*((_DWORD *)this + 98) & 0x10) != 0 )
    {
      DefaultQos = DXGPROCESS::GetDefaultQos(v4);
      v9 = *(unsigned int *)(v8 + 416);
      v11 = *(void (__fastcall **)(__int64, _QWORD, __int64, __int64, int, char))(*(_QWORD *)(v10 + 8) + 352LL);
      v12 = *((_QWORD *)this + 35);
    }
    else
    {
      DefaultQos = DXGPROCESS::GetDefaultQos(v4);
      v9 = *(unsigned int *)(v13 + 416);
      v11 = *(void (__fastcall **)(__int64, _QWORD, __int64, __int64, int, char))(*(_QWORD *)(v14 + 8) + 344LL);
      v12 = *((_QWORD *)this + 32);
    }
    v15 = v7;
    v11(v12, a2, v6, v9, DefaultQos, v15);
  }
  *((_DWORD *)this + 106) = a2;
}
