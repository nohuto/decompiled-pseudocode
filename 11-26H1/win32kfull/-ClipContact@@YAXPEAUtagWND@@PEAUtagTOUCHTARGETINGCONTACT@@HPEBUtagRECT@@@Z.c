/*
 * XREFs of ?ClipContact@@YAXPEAUtagWND@@PEAUtagTOUCHTARGETINGCONTACT@@HPEBUtagRECT@@@Z @ 0x1400887E8
 * Callers:
 *     xxxTouchTargetWindow @ 0x14008868C (xxxTouchTargetWindow.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x14008A1B8 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 * Callees:
 *     TouchTargetingClipContact @ 0x1400888E4 (TouchTargetingClipContact.c)
 */

void __fastcall ClipContact(
        struct tagWND *a1,
        struct tagTOUCHTARGETINGCONTACT *a2,
        __int64 a3,
        const struct tagRECT *a4)
{
  __int64 v4; // rax
  unsigned int v6; // r14d
  __int64 v8; // rsi
  int RegionData; // eax
  unsigned int v10; // edi
  __int64 v11; // rax
  _DWORD *v12; // rbx
  int v13; // eax
  _OWORD *v14; // rdi
  __int64 v15; // rsi
  _OWORD v16[2]; // [rsp+20h] [rbp-28h] BYREF

  v4 = *((_QWORD *)a1 + 5);
  v6 = a3;
  v8 = *(_QWORD *)(v4 + 168);
  if ( v8 )
  {
    RegionData = GreGetRegionData(*(_QWORD *)(v4 + 168), 0LL, 0LL);
    v10 = RegionData;
    if ( RegionData > 0 )
    {
      v11 = Win32AllocPoolZInit(RegionData, 1920103253LL);
      v12 = (_DWORD *)v11;
      if ( v11 )
      {
        if ( (unsigned int)GreGetRegionData(v8, v10, v11) )
        {
          v13 = v12[2];
          v14 = v12 + 8;
          if ( v13 > 0 )
          {
            v15 = (unsigned int)v13;
            do
            {
              v16[0] = *v14;
              ((void (__fastcall *)(_OWORD *, struct tagTOUCHTARGETINGCONTACT *, _QWORD, const struct tagRECT *))TouchTargetingClipContact)(
                v16,
                a2,
                v6,
                a4);
              ++v14;
              --v15;
            }
            while ( v15 );
          }
        }
        Win32FreePool(v12);
      }
    }
  }
  else
  {
    v16[0] = *(_OWORD *)(v4 + 88);
    ((void (__fastcall *)(_OWORD *, struct tagTOUCHTARGETINGCONTACT *, __int64, const struct tagRECT *))TouchTargetingClipContact)(
      v16,
      a2,
      a3,
      a4);
  }
}
