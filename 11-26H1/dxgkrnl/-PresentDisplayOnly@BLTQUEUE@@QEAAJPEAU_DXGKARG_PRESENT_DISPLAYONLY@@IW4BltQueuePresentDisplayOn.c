/*
 * XREFs of ?PresentDisplayOnly@BLTQUEUE@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@IW4BltQueuePresentDisplayOnlySource@1@@Z @ 0x1403C2B40
 * Callers:
 *     ?PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1401A42C8 (-PresentDisplayOnlyCdd@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 *     ?Blt@BLTENTRY@@QEAAJXZ @ 0x1403C2A34 (-Blt@BLTENTRY@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009464 (--0DXGPROCESSDDILOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x140055480 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     McTemplateK0xqdqq_EtwWriteTransfer @ 0x14005F650 (McTemplateK0xqdqq_EtwWriteTransfer.c)
 *     ?TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ @ 0x1401D98D8 (-TdrIsDodPresentTimeoutForcedFlip@@YA_NXZ.c)
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x140284168 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ @ 0x1403C2DE0 (-SetVisibilityIfDeferred@BLTQUEUE@@QEAAXXZ.c)
 *     ?DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z @ 0x1403C2EB4 (-DdiPresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_PRESENT_DISPLAYONLY@@@Z.c)
 */

__int64 __fastcall BLTQUEUE::PresentDisplayOnly(__int64 a1, struct _DXGKARG_PRESENT_DISPLAYONLY *a2, int a3, int a4)
{
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rax
  DXGDODPRESENT *v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // ebx
  char v15; // si
  __int64 v17; // r14
  NTSTATUS v18; // eax
  unsigned int Timeout; // [rsp+20h] [rbp-68h]
  _BYTE v20[16]; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v21[32]; // [rsp+50h] [rbp-38h] BYREF
  union _LARGE_INTEGER v22; // [rsp+90h] [rbp+8h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, (struct DXGFASTMUTEX *const)(a1 + 832), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  Current = DXGPROCESS::GetCurrent(v8);
  DXGPROCESSDDILOCK::DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v21, Current);
  if ( *(_DWORD *)(*(_QWORD *)a1 + 140LL) )
  {
    v14 = -1073741823;
    goto LABEL_7;
  }
  KeClearEvent((PRKEVENT)(a1 + 736));
  a2->pfnPresentDisplayOnlyProgress = (DXGKCB_PRESENT_DISPLAYONLY_PROGRESS)((unsigned __int64)DxgPresentDisplayOnlyProgressCB & -(__int64)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)a1) + 27) + 64LL) + 40LL) + 28LL) < 0x3007u));
  v10 = *(DXGDODPRESENT **)a1;
  *(_DWORD *)(a1 + 824) = 1;
  v11 = ADAPTER_DISPLAY::DdiPresentDisplayOnly(*((ADAPTER_DISPLAY **)v10 + 11), a2);
  v14 = v11;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
  {
    Timeout = *(_DWORD *)(a1 + 260);
    McTemplateK0xqdqq_EtwWriteTransfer(Timeout, v12, v13, *(_QWORD *)(a1 + 248), Timeout, a3, v11, a4);
  }
  v15 = 0;
  if ( v14 >= 0 && g_TdrForceDodPresentTimeout && TdrIsDodPresentTimeoutForcedFlip() )
  {
    v15 = 1;
  }
  else if ( v14 != 259 )
  {
LABEL_6:
    KeSetEvent((PRKEVENT)(a1 + 736), 0, 0);
    goto LABEL_7;
  }
  v14 = 258;
  v17 = 10000000LL * (unsigned int)dword_140168AC8;
  v22.QuadPart = -10000000LL * (unsigned int)dword_140168AC8;
  while ( 1 )
  {
    v18 = KeWaitForSingleObject((PVOID)(a1 + 736), Executive, 0, 0, &v22);
    *(_DWORD *)(a1 + 824) = 0;
    if ( !v15 && !*(_DWORD *)(*(_QWORD *)a1 + 140LL) && (v18 != 258 || KeReadStateEvent((PRKEVENT)(a1 + 736))) )
      break;
    if ( (unsigned int)DXGDODPRESENT::TriggerDisplayOnlyTdr(
                         *(_QWORD *)a1,
                         5 - (unsigned int)(v15 != 0),
                         *(_DWORD *)(a1 + 256),
                         v17) != 1 )
      goto LABEL_6;
  }
  v14 = 0;
LABEL_7:
  BLTQUEUE::SetVisibilityIfDeferred((BLTQUEUE *)a1);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v20);
  return (unsigned int)v14;
}
