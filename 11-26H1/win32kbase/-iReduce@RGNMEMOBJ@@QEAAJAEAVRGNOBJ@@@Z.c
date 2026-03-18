/*
 * XREFs of ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1400238A0
 * Callers:
 *     GreExtCreateRegion @ 0x140011690 (GreExtCreateRegion.c)
 * Callees:
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x140012FA0 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x140015468 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXXZ @ 0x1400156C0 (-vSet@RGNOBJ@@QEAAXXZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x140021698 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x140021F20 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNMEMOBJ::iReduce(RGNMEMOBJ *this, struct RGNOBJ *a2)
{
  unsigned int v4; // ebx
  unsigned int (__fastcall **v6)(const struct REGION_CORE *); // rdi
  const struct REGION_CORE *v7; // rsi
  _DWORD *v8; // rax
  int v9; // r9d
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  struct _RECTL si128; // [rsp+28h] [rbp-20h] BYREF

  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v6 = *(unsigned int (__fastcall ***)(const struct REGION_CORE *))WPP_MAIN_CB.Dpc.DeferredContext;
    v7 = (const struct REGION_CORE *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL));
    v4 = (*(__int64 (__fastcall **)(const struct REGION_CORE *, __int64, _QWORD))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext
                                                                                + 232LL))(
           v7,
           (*(_QWORD *)a2 + 24LL) & -(__int64)(*(_QWORD *)a2 != 0LL),
           -*(_QWORD *)a2);
    RgnCaptureLiveMemoryDumpOnZeroSizedScan(v6, v7);
  }
  else
  {
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
    if ( !v10 )
      goto LABEL_3;
    si128 = (struct _RECTL)_mm_load_si128((const __m128i *)&_xmm);
    RGNOBJ::vSet((RGNOBJ *)&v10, &si128);
    v8 = *(_DWORD **)this;
    LOBYTE(v9) = 8;
    v8[13] = 0x7FFFFFFF;
    v8[14] = 0x7FFFFFFF;
    v8[15] = 0x80000000;
    v8[16] = 0x80000000;
    if ( (unsigned int)RGNOBJ::bMerge(this, (struct RGNOBJ *)&v10, a2, v9) )
    {
      v4 = RGNOBJ::iComplexity(this);
    }
    else
    {
LABEL_3:
      RGNOBJ::vSet(this);
      v4 = 0;
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v10);
  }
  return v4;
}
