/*
 * XREFs of ?vUpdate_VisRectFastOpt@DC@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@AEBVRustAutoHotpatchLockSH@@PEAVREGION@@@Z @ 0x1401C63A0
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?bCompute@DC@@QEAAHXZ @ 0x140177C40 (-bCompute@DC@@QEAAHXZ.c)
 *     ?vUpdate_VisRect@DC@@QEAAXAEBVRustAutoHotpatchLockSH@@PEAVREGION@@@Z @ 0x1401C6340 (-vUpdate_VisRect@DC@@QEAAXAEBVRustAutoHotpatchLockSH@@PEAVREGION@@@Z.c)
 * Callees:
 *     HmgPentryFromPobj @ 0x14001AA80 (HmgPentryFromPobj.c)
 *     ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x140075800 (-GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ?iComplexity@RGNOBJ@@QEBAJAEBVRustAutoHotpatchLockSH@@@Z @ 0x1401C62D4 (-iComplexity@RGNOBJ@@QEBAJAEBVRustAutoHotpatchLockSH@@@Z.c)
 */

void __fastcall DC::vUpdate_VisRectFastOpt(
        DC *this,
        GdiHandleManager **a2,
        const struct RustAutoHotpatchLockSH *a3,
        struct REGION *a4)
{
  struct _ENTRY *EntryFromObject; // rax
  const struct RustAutoHotpatchLockSH *v8; // rdx
  struct _ENTRY *v9; // rdi
  const struct RustAutoHotpatchLockSH *v10; // rdx
  __m128i v11; // xmm1
  int v12; // ecx
  int v13; // edx
  _DWORD *v14; // r8
  __int64 v15; // rax
  _QWORD v16[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    EntryFromObject = GdiHandleManager::GetEntryFromObject(a2[709], this);
  else
    EntryFromObject = (struct _ENTRY *)HmgPentryFromPobj(this);
  v9 = EntryFromObject;
  if ( (*((_BYTE *)EntryFromObject + 15) & 4) != 0 )
  {
    if ( !a4
      || (v16[0] = a4,
          *(_DWORD *)(*((_QWORD *)this + 122) + 116LL) = RGNOBJ::iComplexity((RGNOBJ *)v16, v8),
          (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)v16, v10) == 1) )
    {
      *(_OWORD *)(*((_QWORD *)this + 122) + 120LL) = xmmword_14025D3F0;
    }
    else
    {
      v11 = *(__m128i *)((char *)a4 + 52);
      v12 = *((_DWORD *)this + 258);
      v13 = *((_DWORD *)this + 259);
      v14 = (_DWORD *)*((_QWORD *)this + 122);
      v14[30] = v11.m128i_i32[0] - v12;
      v14[31] = _mm_cvtsi128_si32(_mm_srli_si128(v11, 4)) - v13;
      v14[32] = _mm_srli_si128(v11, 8).m128i_u32[0] - v12;
      v14[33] = _mm_cvtsi128_si32(_mm_srli_si128(v11, 12)) - v13;
    }
    if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
    {
      *((_BYTE *)v9 + 15) &= ~4u;
    }
    else
    {
      v15 = HmgPentryFromPobj(this);
      *(_BYTE *)(v15 + 15) &= ~4u;
    }
  }
}
