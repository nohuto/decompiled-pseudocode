/*
 * XREFs of ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x140011C5C
 * Callers:
 *     GreExtCreateRegion @ 0x140011690 (GreExtCreateRegion.c)
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x140011C5C (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z @ 0x140011C5C (-bSet@RGNOBJ@@QEAAHKPEAU_RECTL@@@Z.c)
 *     ?vSwap@RGNOBJ@@QEAAXPEAV1@@Z @ 0x140011E40 (-vSwap@RGNOBJ@@QEAAXPEAV1@@Z.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x140012210 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x140015468 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z @ 0x14001F730 (-vSet@RGNOBJ@@QEAAXQEBU_RECTL@@@Z.c)
 *     ?RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z @ 0x14001FB50 (-RgnCaptureLiveMemoryDumpOnZeroSizedScan@@YAXAEBVBaseRustExports@@PEBVREGION_CORE@@@Z.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x140021698 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RGNOBJ::bSet(RGNOBJ *this, unsigned int a2, struct _RECTL *a3)
{
  __int64 v4; // rbx
  const struct BaseRustExports *v7; // rdi
  const struct REGION_CORE *v8; // rsi
  unsigned int v9; // ebx
  int v10; // edi
  int right; // ecx
  LONG bottom; // r8d
  LONG top; // edx
  unsigned int v14; // edi
  unsigned int v15; // ebx
  __int64 v16; // [rsp+20h] [rbp-10h] BYREF
  __int64 v17; // [rsp+28h] [rbp-8h] BYREF
  __int64 v18; // [rsp+68h] [rbp+38h] BYREF

  v4 = a2;
  if ( WPP_MAIN_CB.Dpc.DeferredContext )
  {
    v7 = *(const struct BaseRustExports **)WPP_MAIN_CB.Dpc.DeferredContext;
    v8 = (const struct REGION_CORE *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL));
    v9 = (*(__int64 (__fastcall **)(const struct REGION_CORE *, _QWORD))(*(_QWORD *)WPP_MAIN_CB.Dpc.DeferredContext
                                                                       + 128LL))(
           v8,
           a2);
    RgnCaptureLiveMemoryDumpOnZeroSizedScan(v7, v8);
    return v9;
  }
  else
  {
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
    RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v18);
    if ( !v16 || !v18 )
      goto LABEL_4;
    if ( (unsigned int)v4 >= 0x14 )
    {
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v17);
      v14 = (unsigned int)v4 >> 1;
      v15 = v4 - ((unsigned int)v4 >> 1);
      if ( !v17
        || !(unsigned int)RGNOBJ::bSet((RGNOBJ *)&v16, v14, a3)
        || !(unsigned int)RGNOBJ::bSet((RGNOBJ *)&v18, v15, &a3[v14]) )
      {
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v17);
LABEL_4:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v18);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
        return 0LL;
      }
      RGNOBJ::iCombine((RGNOBJ *)&v17, (struct RGNOBJ *)&v18, (struct RGNOBJ *)&v16, 2);
      RGNOBJ::vSwap(this, (struct RGNOBJ *)&v17);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v17);
    }
    else
    {
      v10 = 0;
      if ( (_DWORD)v4 )
      {
        do
        {
          right = a3->right;
          if ( a3->left < right )
          {
            bottom = a3->bottom;
            top = a3->top;
            if ( top < bottom
              && top >= -134217728
              && bottom <= 0x7FFFFFF
              && a3->left >= -134217728
              && right <= 0x7FFFFFF )
            {
              if ( v10 )
              {
                RGNOBJ::vSet((RGNOBJ *)&v16, a3);
                RGNOBJ::iCombine((RGNOBJ *)&v18, this, (struct RGNOBJ *)&v16, 2);
                RGNOBJ::vSwap(this, (struct RGNOBJ *)&v18);
              }
              else
              {
                RGNOBJ::vSet(this, a3);
                v10 = 1;
              }
            }
          }
          ++a3;
          --v4;
        }
        while ( v4 );
      }
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v18);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v16);
    return 1LL;
  }
}
