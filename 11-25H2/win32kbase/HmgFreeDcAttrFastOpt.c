/*
 * XREFs of HmgFreeDcAttrFastOpt @ 0x1401C82DC
 * Callers:
 *     HmgFreeDcAttr @ 0x1400C0A8C (HmgFreeDcAttr.c)
 *     ?FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z @ 0x1401C8BDC (-FreeDCAttributesFastOpt@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAVDC@@@Z.c)
 * Callees:
 *     ?vUnlock@?$SEMOBJ@$0BE@@@QEAAXXZ @ 0x14004549C (-vUnlock@-$SEMOBJ@$0BE@@@QEAAXXZ.c)
 *     PALLOCNOZ @ 0x14004B924 (PALLOCNOZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14008EDD0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline @ 0x1401C4090 (Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z @ 0x1401C4B40 (--0-$SEMOBJ@$0BE@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@_N@Z.c)
 */

void __fastcall HmgFreeDcAttrFastOpt(_QWORD *a1, __int64 a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v5; // rcx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v7; // rsi
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rcx
  HSEMAPHORE v13; // [rsp+38h] [rbp+10h] BYREF

  CurrentThread = GreGetCurrentThread();
  if ( a2 && CurrentThread )
  {
    if ( !*((_QWORD *)CurrentThread + 4) )
    {
      *((_QWORD *)CurrentThread + 4) = a2;
      return;
    }
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v5);
    v7 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      if ( *CurrentProcessWin32Process )
      {
        IsEnabledDeviceUsageNoInline = Feature_GDI_GlobalsOptimization__private_IsEnabledDeviceUsageNoInline();
        SEMOBJ<20>::SEMOBJ<20>(&v13, a1, IsEnabledDeviceUsageNoInline != 0);
        v9 = v7 + 24;
        v10 = v7[24];
        if ( (_QWORD *)v10 == v7 + 24 || *(_DWORD *)(v10 + 16) == 11 )
        {
          v10 = PALLOCNOZ(112LL, 1717789767LL);
          if ( !v10 )
          {
LABEL_14:
            SEMOBJ<20>::vUnlock(&v13);
            return;
          }
          v11 = *v9;
          if ( *(__int64 **)(*v9 + 8) != v9 )
            __fastfail(3u);
          *(_QWORD *)v10 = v11;
          *(_QWORD *)(v10 + 8) = v9;
          *(_QWORD *)(v11 + 8) = v10;
          *v9 = v10;
          *(_DWORD *)(v10 + 16) = 0;
        }
        v12 = *(unsigned int *)(v10 + 16);
        *(_DWORD *)(v10 + 16) = v12 + 1;
        *(_QWORD *)(v10 + 8 * v12 + 24) = a2;
        v7[5] = a2;
        goto LABEL_14;
      }
    }
  }
}
