/*
 * XREFs of ?GrepSaveDC@@YAHAEAVXDCOBJ@@H@Z @ 0x140055CAC
 * Callers:
 *     GreSaveDC @ 0x140054408 (GreSaveDC.c)
 *     NtGdiSaveDC @ 0x140055C50 (NtGdiSaveDC.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140077E90 (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400D7D10 (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0SAVEOBJ@@QEAA@AEAVXDCOBJ@@JP6AH0J@ZP6AX0J@Z@Z @ 0x14019E6BC (--0SAVEOBJ@@QEAA@AEAVXDCOBJ@@JP6AH0J@ZP6AX0J@Z@Z.c)
 *     ??1SAVEOBJ@@QEAA@XZ @ 0x14021B8D0 (--1SAVEOBJ@@QEAA@XZ.c)
 *     ??1DCMODOBJ@@QEAA@XZ @ 0x14021DC5C (--1DCMODOBJ@@QEAA@XZ.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1402FDD6C (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 */

__int64 __fastcall GrepSaveDC(struct XDCOBJ *a1, int a2)
{
  __int64 v2; // rdi
  unsigned int v5; // r14d
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // esi
  int v9; // r15d
  __int64 v10; // rdx
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  _QWORD v16[2]; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v17[4]; // [rsp+40h] [rbp-29h] BYREF
  int v18; // [rsp+44h] [rbp-25h]
  _BYTE v19[4]; // [rsp+58h] [rbp-11h] BYREF
  int v20; // [rsp+5Ch] [rbp-Dh]
  _QWORD v21[5]; // [rsp+70h] [rbp+7h] BYREF
  int v22; // [rsp+98h] [rbp+2Fh]
  __int64 v23; // [rsp+D0h] [rbp+67h] BYREF
  char v24; // [rsp+E0h] [rbp+77h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v5 = 0;
  if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( a2 )
      goto LABEL_8;
    v6 = HmgPentryFromPobjFast(*((_QWORD *)a1 + 2), *(_QWORD *)a1);
  }
  else
  {
    if ( a2 )
      goto LABEL_8;
    v6 = HmgPentryFromPobj(*(_QWORD *)a1);
  }
  if ( (*(_DWORD *)(v6 + 8) & 0xFFFFFFFE) == 0 )
  {
    EngSetLastError(6u);
    return v5;
  }
LABEL_8:
  v7 = *(_QWORD *)(*(_QWORD *)a1 + 976LL);
  v8 = *(_DWORD *)(v7 + 152);
  if ( (v8 & 0x1000) != 0 )
    GreDCSelectBrush(*(_QWORD *)a1, *(_QWORD *)(v7 + 160));
  if ( (v8 & 0x2000) != 0 )
    GreDCSelectPen(*(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 168LL));
  v23 = *(_QWORD *)(*(_QWORD *)a1 + 48LL);
  if ( (*(_DWORD *)(v23 + 40) & 1) != 0 )
  {
    if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
      GrepLockVisRgnFast((struct Gre::Base::SESSION_GLOBALS *)v2);
    else
      GreLockVisRgn(v23);
  }
  SEMOBJ<13>::SEMOBJ<13>(&v24, v2);
  v9 = *(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x800;
  if ( v9 )
    DC::bMakeInfoDC(*(DC **)a1, 0);
  DCMEMOBJ::DCMEMOBJ((DCMEMOBJ *)v21, a1);
  if ( v21[0] )
  {
    if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
      PDEVOBJ::vReferencePdevFast((PDEVOBJ *)&v23, (struct Gre::Base::SESSION_GLOBALS *)v2);
    else
      PDEVOBJ::vReferencePdev((PDEVOBJ *)&v23);
    v10 = *(_QWORD *)a1;
    v16[0] = a1;
    v16[1] = *(_QWORD *)(v10 + 112);
    *(_QWORD *)(v10 + 112) = *(_QWORD *)v21[0];
    SAVEOBJ::SAVEOBJ(
      (SAVEOBJ *)v19,
      a1,
      *(_DWORD *)(v21[0] + 104LL),
      (int (*)(struct XDCOBJ *, int))bSavePath,
      (void (*)(struct XDCOBJ *, int))vRestorePath);
    if ( v20 )
    {
      SAVEOBJ::SAVEOBJ(
        (SAVEOBJ *)v17,
        a1,
        *(_DWORD *)(v21[0] + 104LL),
        (int (*)(struct XDCOBJ *, int))bSaveRegion,
        vRestoreRegion);
      if ( v18 )
      {
        if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline()
           ? GreSetDCOwnerExFastOpt(
               (struct Gre::Base::SESSION_GLOBALS *)v21[2],
               *(struct HOBJ__ **)v21[0],
               0x80000012,
               0,
               0)
           : GreSetDCOwnerEx(*(_QWORD *)v21[0], 2147483666LL, 0LL, 0LL) )
        {
          v18 = 0;
          v20 = 0;
          v16[0] = 0LL;
          v22 = 1;
          if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
            PDEVOBJ::vUnreferencePdevFast((PDEVOBJ *)&v23, (struct Gre::Base::SESSION_GLOBALS *)v2);
          else
            PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v23);
          if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0x4000) != 0 )
            *(_DWORD *)(v21[0] + 36LL) |= 0x4000u;
          v12 = *(_QWORD *)(v21[0] + 496LL);
          if ( v12 )
          {
            v13 = *(_DWORD *)(v12 + 112);
            if ( (v13 & 0x800) != 0 )
            {
              if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
                INC_SHARE_REF_CNT_FAST(v2, *(_QWORD *)(v21[0] + 496LL));
              else
                INC_SHARE_REF_CNT(*(_QWORD *)(v21[0] + 496LL));
            }
            else if ( v13 >= 0 )
            {
              INC_SHARE_REF_CNT(*(_QWORD *)(v21[0] + 496LL));
              ++*(_DWORD *)(v12 + 168);
            }
          }
          if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
          {
            INC_SHARE_REF_CNT_FAST(v2, *(_QWORD *)(*(_QWORD *)a1 + 136LL));
            INC_SHARE_REF_CNT_FAST(v2, *(_QWORD *)(*(_QWORD *)a1 + 144LL));
            INC_SHARE_REF_CNT_FAST(v2, *(_QWORD *)(*(_QWORD *)a1 + 152LL));
            INC_SHARE_REF_CNT_FAST(v2, *(_QWORD *)(*(_QWORD *)a1 + 96LL));
          }
          else
          {
            INC_SHARE_REF_CNT(*(_QWORD *)(*(_QWORD *)a1 + 136LL));
            INC_SHARE_REF_CNT(*(_QWORD *)(*(_QWORD *)a1 + 144LL));
            INC_SHARE_REF_CNT(*(_QWORD *)(*(_QWORD *)a1 + 152LL));
            INC_SHARE_REF_CNT(*(_QWORD *)(*(_QWORD *)a1 + 96LL));
          }
          v14 = *(_QWORD *)(*(_QWORD *)a1 + 88LL);
          if ( v14 != *(_QWORD *)(v2 + 3768) )
            _InterlockedIncrement((volatile signed __int32 *)(v14 + 56));
          v5 = *(_DWORD *)(*(_QWORD *)a1 + 104LL);
          *(_DWORD *)(*(_QWORD *)a1 + 104LL) = v5 + 1;
        }
      }
      SAVEOBJ::~SAVEOBJ((SAVEOBJ *)v17);
    }
    SAVEOBJ::~SAVEOBJ((SAVEOBJ *)v19);
    DCMODOBJ::~DCMODOBJ((DCMODOBJ *)v16);
  }
  else
  {
    EngSetLastError(8u);
  }
  DCMEMOBJ::~DCMEMOBJ((DCMEMOBJ *)v21);
  if ( v9 )
    DC::bMakeInfoDC(*(DC **)a1, 1);
  if ( (*(_DWORD *)(v23 + 40) & 1) != 0 )
  {
    if ( (unsigned int)Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline() )
      GrepUnlockVisRgnFast((struct Gre::Base::SESSION_GLOBALS *)v2);
    else
      GreUnlockVisRgn(v23);
  }
  SEMOBJ<13>::vUnlock(&v24);
  return v5;
}
