/*
 * XREFs of ?Escape@DXGDEVICE@@QEAAJPEAU_D3DKMT_DEVICE_ESCAPE@@@Z @ 0x140190990
 * Callers:
 *     DxgkEscape @ 0x14043CE60 (DxgkEscape.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGDEVICE::Escape(ADAPTER_RENDER **this, struct _D3DKMT_DEVICE_ESCAPE *a2)
{
  unsigned int v3; // ebx
  __int64 Type; // rdx
  struct _KTHREAD **Current; // rax
  struct DXGPROCESS *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct DXGALLOCATION *v13; // rdx
  unsigned int v14; // eax
  _BYTE v15[40]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v16; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0;
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(this[2]) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5549;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      5549LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  Type = a2->Type;
  if ( !(_DWORD)Type )
  {
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v15, Current);
    v7 = DXGPROCESS::GetCurrent();
    v8 = (a2->VidPnFromAllocation.hPrimaryAllocation >> 6) & 0xFFFFFF;
    if ( (unsigned int)v8 < *((_DWORD *)v7 + 74) )
    {
      v9 = (unsigned int)v8;
      v10 = *(_DWORD *)(*((_QWORD *)v7 + 35) + 16 * v8 + 8);
      if ( ((a2->VidPnFromAllocation.hPrimaryAllocation >> 25) & 0x60) == (v10 & 0x60)
        && (v10 & 0x2000) == 0
        && (v10 & 0x1F) != 0 )
      {
        v11 = *((_QWORD *)v7 + 35);
        v12 = 2 * v9;
        if ( (*(_BYTE *)(v11 + 8 * v12 + 8) & 0x1F) == 5 )
        {
          v13 = *(struct DXGALLOCATION **)(v11 + 8 * v12);
          goto LABEL_14;
        }
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
    v13 = 0LL;
LABEL_14:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v16, v13);
    if ( v16 )
    {
      v14 = *(_DWORD *)(*(_QWORD *)(v16 + 48) + 4LL);
      if ( (v14 & 0x2003) != 0 )
      {
        a2->VidPnFromAllocation.VidPnSourceId = (v14 >> 6) & 0xF;
      }
      else
      {
        v3 = -1073741811;
        WdLogSingleEntry2(3LL, a2->VidPnFromAllocation.hPrimaryAllocation, -1073741811LL);
        WdLogGlobalForLineNumber = 5576;
      }
    }
    else
    {
      v3 = -1073741811;
      WdLogSingleEntry2(3LL, a2->VidPnFromAllocation.hPrimaryAllocation, -1073741811LL);
      WdLogGlobalForLineNumber = 5566;
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v16);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15);
    return v3;
  }
  if ( (_DWORD)Type == 1 )
    return 3221225659LL;
  v3 = -1073741811;
  WdLogSingleEntry2(3LL, Type, -1073741811LL);
  WdLogGlobalForLineNumber = 5596;
  return v3;
}
