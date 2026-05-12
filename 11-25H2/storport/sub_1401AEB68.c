/*
 * XREFs of sub_1401AEB68 @ 0x1401AEB68
 * Callers:
 *     sub_14003BF40 @ 0x14003BF40 (sub_14003BF40.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_140021324 @ 0x140021324 (sub_140021324.c)
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_140021760 @ 0x140021760 (sub_140021760.c)
 *     sub_140034664 @ 0x140034664 (sub_140034664.c)
 *     sub_140076348 @ 0x140076348 (sub_140076348.c)
 *     sub_14007842C @ 0x14007842C (sub_14007842C.c)
 *     sub_140078CD8 @ 0x140078CD8 (sub_140078CD8.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1401AEB68(unsigned __int8 *Context, __int64 a2)
{
  __int64 v2; // rsi
  int v5; // edi
  __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // r8
  int v9; // edx
  __int64 v10; // rax
  __int64 v11; // r14
  int v12; // r12d
  int v13; // esi
  int v14; // r13d
  __int64 v15; // r8
  __int64 *v16; // rcx
  unsigned __int8 v18; // al
  char v19; // di
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rsi
  int v24; // ecx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v25; // rcx
  int v26; // eax
  __int64 v27; // r8
  _DWORD *v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // r8
  PVOID *Handle; // [rsp+20h] [rbp-79h]
  unsigned int v33; // [rsp+48h] [rbp-51h]
  int v34; // [rsp+80h] [rbp-19h]
  int v35; // [rsp+84h] [rbp-15h]

  v2 = *((_QWORD *)Context + 3);
  v35 = 0;
  v34 = -1;
  v5 = 0;
  if ( byte_1401687E9 )
  {
    Context[507] |= 0x20u;
    goto LABEL_12;
  }
  if ( !v2 || (*(_BYTE *)(v2 + 108) & 8) != 0 || *((_DWORD *)Context + 486) == 1 )
    goto LABEL_24;
  if ( !sub_140021280((__int64)Context) )
  {
    if ( (Context[505] & 0x80u) != 0 )
    {
      v5 = -1073741738;
      goto LABEL_12;
    }
    v18 = _interlockedbittestandset((volatile signed __int32 *)Context + 128, 0);
    v35 = v18;
    if ( !v18 )
    {
      Context[505] ^= (Context[505] ^ (4 * (*(_DWORD *)(a2 + 8) >> 1))) & 4;
      if ( sub_1400215B0((__int64)Context, 4) )
        v5 = sub_140021760(*((_QWORD *)Context + 3) + 376LL);
      if ( *((_QWORD *)Context + 234) )
      {
LABEL_49:
        if ( v5 >= 0 )
          goto LABEL_50;
LABEL_34:
        Context[505] &= ~4u;
LABEL_35:
        sub_140078CD8(*((struct _DEVICE_OBJECT **)Context + 1), (Context[505] & 4) != 0);
        goto LABEL_12;
      }
      if ( (*(_BYTE *)(v2 + 104) & 0x20) != 0 )
      {
        v19 = 0;
        v20 = 264LL;
        if ( (*(_BYTE *)(v2 + 110) & 0x40) == 0 )
          goto LABEL_40;
      }
      else
      {
        if ( (*(_BYTE *)(v2 + 110) & 0x40) == 0 )
        {
          v5 = -1073741637;
          goto LABEL_34;
        }
        v19 = 0;
      }
      v21 = *(_QWORD *)(v2 + 4960);
      v20 = 264LL;
      if ( v21 && (*(_DWORD *)(v21 + 20) & 0x100) == 0 )
      {
        v19 = 1;
        v20 = 296LL;
      }
LABEL_40:
      v22 = sub_1400143E0(64LL, v20, 1330667858LL, *((_QWORD *)Context + 1));
      v23 = (_QWORD *)v22;
      if ( v22 )
      {
        v24 = *(_DWORD *)(v22 + 32);
        *(_DWORD *)(v22 + 16) = 0;
        *(_DWORD *)(v22 + 32) = v24 & 0xFFFFFFF1 | 0xA;
        *(_QWORD *)(v22 + 88) = v22 + 80;
        *(_QWORD *)(v22 + 80) = v22 + 80;
        KeInitializeSpinLock((PKSPIN_LOCK)(v22 + 96));
        v23[1] = v23 + 23;
        *((_DWORD *)v23 + 47) = 16;
        *((_DWORD *)v23 + 46) = 1;
        *((_DWORD *)v23 + 48) = 1;
        *((_DWORD *)v23 + 52) = 1;
        *((_DWORD *)v23 + 50) = 1;
        *((_DWORD *)v23 + 51) = 32;
        *(_OWORD *)(v23 + 27) = xmmword_14014C788;
        *((_DWORD *)v23 + 58) = 1;
        *((_DWORD *)v23 + 59) = 32;
        v23[30] = 0LL;
        v23[31] = 0LL;
        *((_DWORD *)v23 + 64) = -1;
        if ( v19 )
        {
          *((_DWORD *)v23 + 49) |= 0x100u;
          *((_DWORD *)v23 + 52) = 2;
          *((_DWORD *)v23 + 66) = 1;
          *((_DWORD *)v23 + 67) = 32;
          v23[34] = 0LL;
          v23[35] = 0LL;
          *((_DWORD *)v23 + 72) = -1;
          *((_DWORD *)v23 + 8) |= 0x1000u;
        }
        v5 = sub_14007842C(*((_QWORD *)Context + 1), (int *)v23 + 46, (__int64)Context, (__int64)v23);
        if ( v5 >= 0 )
        {
          if ( *v23 )
          {
            PoFxSetComponentLatency(*v23, 0LL, -1LL);
            PoFxSetComponentResidency(*v23, 0LL, -1LL);
            v25 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)Context + 233);
            *((_QWORD *)Context + 234) = v23;
            ExReInitializeRundownProtectionCacheAware(v25);
            Context[505] |= 0x80u;
LABEL_50:
            *(_DWORD *)(*((_QWORD *)Context + 234) + 32LL) ^= (*(_DWORD *)(a2 + 8) ^ *(_DWORD *)(*((_QWORD *)Context
                                                                                                 + 234)
                                                                                               + 32LL)) & 1;
            v26 = *((_DWORD *)Context + 487);
            v27 = *((_QWORD *)Context + 234);
            if ( v26 != -1 )
              goto LABEL_58;
            v28 = *(_DWORD **)(v27 + 8);
            if ( *v28 < 2u )
              goto LABEL_57;
            v29 = v28[3];
            if ( (v29 & 0x10) != 0 )
            {
              v26 = v28[4];
              goto LABEL_58;
            }
            if ( *v28 >= 3u && (v29 & 0x20) != 0 )
              v26 = 0;
            else
LABEL_57:
              v26 = 300000;
LABEL_58:
            *(_DWORD *)(v27 + 24) = v26;
            *(_DWORD *)(*((_QWORD *)Context + 234) + 20LL) = *(_DWORD *)(a2 + 12);
            sub_140034664((__int64)Context, *(_DWORD *)(a2 + 12), 1);
            PoFxStartDevicePowerManagement(**((_QWORD **)Context + 234));
            v31 = *((_QWORD *)Context + 234);
            if ( (*(_DWORD *)(v31 + 32) & 0x100) != 0 )
            {
              LOBYTE(v30) = 1;
              PoRegisterCoalescingCallback(sub_140078F10, v30, v31 + 104, Context);
              PoRegisterPowerSettingCallback(
                *((PDEVICE_OBJECT *)Context + 1),
                &stru_140149DC0,
                (PPOWER_SETTING_CALLBACK)sub_140079170,
                Context,
                (PVOID *)(*((_QWORD *)Context + 234) + 112LL));
              *(_QWORD *)(*((_QWORD *)Context + 234) + 120LL) = ExAllocateTimer(sub_140079150, Context, 0LL);
              *(_QWORD *)(*((_QWORD *)Context + 234) + 128LL) = ExAllocateTimer(sub_140078D60, Context, 0LL);
            }
            goto LABEL_35;
          }
          v5 = -1073741823;
        }
        ExFreePoolWithTag(v23, 0x4F506152u);
      }
      else
      {
        v5 = -1073741670;
      }
      goto LABEL_49;
    }
LABEL_24:
    v5 = -1073741823;
    goto LABEL_12;
  }
  v6 = *((_QWORD *)Context + 234);
  v7 = *(_DWORD *)(a2 + 12);
  if ( v7 != *(_DWORD *)(v6 + 20) )
  {
    *(_DWORD *)(v6 + 20) = v7;
    if ( _bittest((const signed __int32 *)(*((_QWORD *)Context + 234) + 32LL), 8u) )
      sub_140021324((__int64)Context);
    else
      sub_140034664((__int64)Context, *(_DWORD *)(a2 + 12), 0);
  }
  v8 = *((_QWORD *)Context + 234);
  v9 = *(_DWORD *)(v8 + 32);
  if ( (((unsigned __int8)v9 ^ *(_BYTE *)(a2 + 8)) & 1) != 0 )
    *(_DWORD *)(v8 + 32) = v9 ^ (v9 ^ *(_DWORD *)(a2 + 8)) & 1;
  ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 233));
LABEL_12:
  if ( byte_140168DAA )
  {
    v10 = *((_QWORD *)Context + 3);
    v11 = 0LL;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    if ( v10 )
      v34 = *(_DWORD *)(v10 + 56);
    if ( sub_140021280((__int64)Context) )
    {
      v16 = (__int64 *)*((_QWORD *)Context + 234);
      v11 = *v16;
      v13 = v16[4] & 1;
      v14 = *((_DWORD *)v16 + 5);
      v12 = *(_DWORD *)(v16[1] + 24);
      ExReleaseRundownProtectionCacheAware(*((PEX_RUNDOWN_REF_CACHE_AWARE *)Context + 233));
    }
    if ( (byte_1401694F2 & 0x10) != 0 )
    {
      v33 = (*(_DWORD *)(a2 + 8) >> 1) & 1;
      LODWORD(Handle) = v34;
      sub_140076348(
        *(_DWORD *)(a2 + 8) & 1,
        v33,
        v15,
        v11,
        Handle,
        Context[104],
        Context[105],
        Context[106],
        v5,
        v33,
        *(_DWORD *)(a2 + 8) & 1,
        *(_DWORD *)(a2 + 12),
        v12,
        (Context[505] >> 2) & 1,
        v13,
        v14);
    }
  }
  if ( !v35 )
    *((_DWORD *)Context + 128) &= ~1u;
  return (unsigned int)v5;
}
