/*
 * XREFs of ?QueryInterface@ShellGesturesClientProxy@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180060CC0
 * Callers:
 *     ?QueryInterface@ShellGesturesClientProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015E5E0 (-QueryInterface@ShellGesturesClientProxy@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ShellGesturesClientProxy@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015E5F0 (-QueryInterface@ShellGesturesClientProxy@@WHI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ShellGesturesClientProxy@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015E600 (-QueryInterface@ShellGesturesClientProxy@@WIA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ShellGesturesClientProxy@@WII@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18015E620 (-QueryInterface@ShellGesturesClientProxy@@WII@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ShellGesturesClientProxy::QueryInterface(
        ShellGesturesClientProxy *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rax
  unsigned int v6; // ebx
  unsigned __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_fc9627fe_ee9e_4718_b797_19522e5898d2.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_fc9627fe_ee9e_4718_b797_19522e5898d2.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_fc9627fe_ee9e_4718_b797_19522e5898d2.Data4;
  v6 = 0;
  if ( !v4 )
  {
    (**((void (__fastcall ***)(char *))this + 2))((char *)this + 16);
    v7 = (unsigned __int64)this + 120;
LABEL_5:
    *a3 = (void *)(v7 & -(__int64)(this != 0LL));
    return 0LL;
  }
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1 )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4;
  if ( !v9 )
  {
    (**((void (__fastcall ***)(char *))this + 2))((char *)this + 16);
    v7 = (unsigned __int64)this + 128;
    goto LABEL_5;
  }
  v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1 )
    v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data4;
  if ( !v10 )
  {
    (**((void (__fastcall ***)(char *))this + 2))((char *)this + 16);
    v7 = (unsigned __int64)this + 136;
    goto LABEL_5;
  }
  v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v11 )
  {
    v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_974ecfd8_5dae_f205_7c42_b9160ca196d3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_974ecfd8_5dae_f205_7c42_b9160ca196d3.Data1 )
      v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_974ecfd8_5dae_f205_7c42_b9160ca196d3.Data4;
    if ( v12 )
      goto LABEL_22;
  }
  if ( !this )
  {
LABEL_22:
    *a3 = 0LL;
  }
  else
  {
    *a3 = (char *)this + 8;
    if ( this != (ShellGesturesClientProxy *)-8LL )
    {
      (**(void (__fastcall ***)(ShellGesturesClientProxy *))this)(this);
      return v6;
    }
  }
  return (unsigned int)-2147467262;
}
