/*
 * XREFs of ?MakePointerMessageWorker@@YAHPEBUtagPOINTER_INFO@@UtagPOINT@@HHHIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x140137534
 * Callers:
 *     ?MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z @ 0x14013720C (-MakePointerMessage@@YAH_KIPEAXPEA_KPEA_JPEAGPEAKPEAHPEAPEAUHWND__@@@Z.c)
 *     PrepareSentPointerMessageForClient @ 0x140137300 (PrepareSentPointerMessageForClient.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     GetDPITransformationMonitor @ 0x14008BDAC (GetDPITransformationMonitor.c)
 */

__int64 __fastcall MakePointerMessageWorker(
        const struct tagPOINTER_INFO *a1,
        struct tagPOINT a2,
        unsigned __int16 a3,
        int a4,
        int a5,
        unsigned int a6,
        void *a7,
        unsigned __int64 *a8,
        __int64 *a9,
        unsigned __int16 *a10,
        unsigned int *a11,
        int *a12,
        HWND *a13)
{
  int v13; // ebx
  unsigned int v17; // esi
  unsigned __int64 v18; // r14
  __int64 v19; // rax
  HWND v20; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 DPITransformationMonitor; // [rsp+20h] [rbp-10h] BYREF
  __int64 v25; // [rsp+60h] [rbp+30h] BYREF

  v13 = 0;
  v25 = 0LL;
  v17 = 1;
  if ( a1 )
  {
    v18 = *((unsigned __int16 *)a1 + 2);
    if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))GetAdjustedPointerPixelLocation)(
                          *((_QWORD *)a1 + 4),
                          a2,
                          &v25) )
      v25 = *((_QWORD *)a1 + 4);
    v19 = HMValidateHandleNoSecure(*((_QWORD *)a1 + 3), 1);
    if ( v19 && (*(_DWORD *)(*(_QWORD *)(v19 + 40) + 288LL) & 0xF) != 2 )
    {
      DPITransformationMonitor = GetDPITransformationMonitor(v25, v19);
      PhysicalToLogicalDPIPoint(&v25, &v25, 0LL, &DPITransformationMonitor);
    }
    if ( a6 <= 0x249 )
    {
      if ( a6 != 585 )
      {
        if ( a6 == 528 )
        {
          v22 = (v18 << 16) | 0x246;
LABEL_25:
          *a8 = v22;
          goto LABEL_21;
        }
        if ( a6 == 577 || a6 == 578 || a6 == 579 )
        {
          v23 = a3;
          goto LABEL_35;
        }
        if ( a6 != 581 && a6 - 582 > 1 )
          return 0;
      }
    }
    else if ( a6 != 586 )
    {
      switch ( a6 )
      {
        case 0x24Bu:
          *a8 = v18 | ((unsigned __int64)a3 << 16);
          break;
        case 0x24Cu:
          *a8 = v18;
          break;
        case 0x250u:
          *a8 = v18;
LABEL_21:
          *a9 = (unsigned __int16)v25 | (unsigned __int64)(WORD2(v25) << 16);
          goto LABEL_15;
        case 0x251u:
        case 0x252u:
          goto LABEL_34;
        case 0x253u:
          goto LABEL_15;
        default:
          return 0;
      }
      *a9 = (__int64)a7;
LABEL_15:
      *a10 = *((_WORD *)a1 + 2);
      *a11 = *(_DWORD *)a1;
      if ( a4 || a5 )
        v13 = 1;
      v20 = (HWND)*((_QWORD *)a1 + 3);
      *a12 = v13;
      *a13 = v20;
      return v17;
    }
LABEL_34:
    v23 = *((_WORD *)a1 + 6) & 0xE1F7;
LABEL_35:
    v22 = v18 | (v23 << 16);
    goto LABEL_25;
  }
  return 0LL;
}
