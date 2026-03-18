/*
 * XREFs of CalcWakeMask @ 0x1401206B0
 * Callers:
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x14011F61C (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 *     ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x14011F7BC (-CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z.c)
 *     ?WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z @ 0x14011F8C4 (-WakeSomeoneAfterUnlockingOrUndeferring@@YAXPEAUtagQMSG@@@Z.c)
 *     EditionPostInputMessage @ 0x14011FA60 (EditionPostInputMessage.c)
 *     EditionPostMouseMoveToQ @ 0x14011FD80 (EditionPostMouseMoveToQ.c)
 *     AdjustPwndPtiPqForDelegation @ 0x1401203DC (AdjustPwndPtiPqForDelegation.c)
 *     TransferWakeBit @ 0x140120600 (TransferWakeBit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcWakeMask(unsigned int a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax
  unsigned int v6; // eax
  int v7; // r10d
  unsigned int v12; // r8d
  unsigned int v13; // edx
  unsigned int v14; // eax
  BOOL v15; // edx
  BOOL v20; // r8d
  unsigned int v21; // edx
  BOOL v22; // eax
  BOOL v23; // edx
  unsigned int v24; // r8d
  int v25; // eax

  if ( a3 )
  {
    v24 = a3 | 0x3C07;
    if ( (a3 & 0x1C07) == 0 )
      v24 = a3;
    result = v24 | 0x98;
    if ( (v24 & 0x98) == 0 )
      result = v24;
  }
  else
  {
    result = 15871LL;
  }
  if ( a1 || a2 != -1 )
  {
    v6 = result & 0xFFFFFEFF;
    v7 = 0;
    if ( a1 )
    {
      if ( a1 > a2 )
      {
        if ( a2 > 0xA0 || a1 < 0xA0 )
          goto LABEL_23;
        goto LABEL_13;
      }
      if ( a1 > 0xA0 )
        goto LABEL_15;
    }
    else if ( a2 == -1 )
    {
      goto LABEL_37;
    }
    if ( a2 >= 0xA0 )
      goto LABEL_23;
LABEL_13:
    if ( !a1 )
    {
      if ( a2 == -1 )
        goto LABEL_37;
LABEL_16:
      if ( a2 >= 0x200 )
        goto LABEL_23;
      goto LABEL_22;
    }
    if ( a1 > a2 )
    {
      if ( a2 > 0x200 || a1 < 0x200 )
        goto LABEL_23;
      goto LABEL_22;
    }
LABEL_15:
    if ( a1 <= 0x200 )
      goto LABEL_16;
LABEL_22:
    v6 &= ~2u;
LABEL_23:
    if ( a1 <= a2 )
    {
      if ( a1 <= 0xA9 && a2 >= 0xA1 )
      {
        v12 = v6;
LABEL_120:
        if ( a2 >= 0x100 )
        {
LABEL_40:
          if ( a1 > 0xFF || a2 < 0xFF )
          {
            v12 &= ~0x400u;
            v13 = v12;
            v14 = v12;
            if ( a1 > 0x240 )
              goto LABEL_110;
          }
          else
          {
            v13 = v12;
            v14 = v12;
          }
          if ( a2 >= 0x240 )
            goto LABEL_51;
LABEL_110:
          if ( a1 )
          {
            if ( a1 > a2 )
            {
              v15 = a2 > 0x11B || a1 < 0x11B;
              v12 = v14;
              if ( v15 )
                goto LABEL_49;
            }
            else if ( a1 <= 0x11B )
            {
              goto LABEL_113;
            }
LABEL_48:
            v12 = v14 & 0xFFFFF7FF;
LABEL_49:
            v13 = v12;
            if ( a1 > a2 )
            {
              if ( a2 < 0x257 && a1 > 0x245 )
                goto LABEL_62;
LABEL_91:
              if ( a1 > a2 )
              {
                if ( (a2 >= 0x244 || a1 <= 0x241) && (a2 >= 0x238 || a1 <= 0x238) )
                  goto LABEL_61;
                goto LABEL_62;
              }
LABEL_92:
              if ( (a1 > 0x244 || a2 < 0x241) && (a1 > 0x238 || a2 < 0x238) )
LABEL_61:
                v13 &= ~0x1000u;
LABEL_62:
              if ( a1 )
              {
                if ( a1 > a2 )
                {
                  if ( a2 > 0xF || a1 < 0xF )
                    goto LABEL_153;
                  goto LABEL_71;
                }
                if ( a1 > 0xF )
                {
LABEL_71:
                  v13 &= ~0x20u;
                  goto LABEL_72;
                }
              }
              else if ( a2 == -1 )
              {
                goto LABEL_84;
              }
              if ( a2 >= 0xF )
              {
LABEL_72:
                if ( !a1 )
                {
                  if ( a2 == -1 )
                    goto LABEL_84;
LABEL_75:
                  if ( a2 >= 0x113 )
                  {
LABEL_84:
                    result = v13 | 0x3C07;
                    if ( a1 != 35 )
                      return v13;
                    return result;
                  }
                  goto LABEL_78;
                }
                if ( a1 <= a2 )
                {
                  if ( a1 > 0x113 )
                    goto LABEL_80;
                  goto LABEL_75;
                }
LABEL_153:
                if ( a2 > 0x113 || (v25 = 0, a1 < 0x113) )
                  v25 = 1;
                if ( v25 )
                  goto LABEL_84;
LABEL_78:
                if ( !a1 )
                {
                  if ( a2 == -1 )
                    goto LABEL_84;
LABEL_116:
                  if ( a2 >= 0x118 )
                    goto LABEL_84;
LABEL_83:
                  v13 &= ~0x10u;
                  goto LABEL_84;
                }
                if ( a1 > a2 )
                {
                  if ( a2 > 0x118 || a1 < 0x118 )
                    v7 = 1;
                  if ( v7 )
                    goto LABEL_84;
                  goto LABEL_83;
                }
LABEL_80:
                if ( a1 > 0x118 )
                  goto LABEL_83;
                goto LABEL_116;
              }
              goto LABEL_71;
            }
            if ( a1 > 0x257 )
              goto LABEL_92;
LABEL_51:
            if ( a2 >= 0x245 )
              goto LABEL_62;
            goto LABEL_91;
          }
          v13 = v14;
          if ( a2 == -1 )
            goto LABEL_84;
LABEL_113:
          if ( a2 >= 0x11B )
            goto LABEL_49;
          goto LABEL_48;
        }
LABEL_39:
        v12 = v6 & 0xFFFFFFFE;
        goto LABEL_40;
      }
      if ( a1 <= 0x20E && a2 >= 0x201 )
      {
LABEL_38:
        v12 = v6;
        if ( a1 > 0x109 )
          goto LABEL_39;
        goto LABEL_120;
      }
      goto LABEL_36;
    }
    if ( (a2 >= 0xA9 || a1 <= 0xA1) && (a2 >= 0x20E || a1 <= 0x201) )
LABEL_36:
      v6 &= ~4u;
LABEL_37:
    if ( a1 > a2 )
    {
      v20 = a2 < 0x109 && a1 > 0x100;
      v21 = v6 & 0xFFFFFFFE;
      if ( v20 )
        v21 = v6;
      v22 = a2 < 0xFF && a1 > 0xFF;
      v12 = v21 & 0xFFFFFBFF;
      if ( v22 )
        v12 = v21;
      v23 = a2 < 0x240 && a1 > 0x240;
      v14 = v12;
      if ( v23 )
        goto LABEL_49;
      goto LABEL_110;
    }
    goto LABEL_38;
  }
  return result;
}
