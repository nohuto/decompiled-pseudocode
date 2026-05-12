/*
 * XREFs of sub_14012DC60 @ 0x14012DC60
 * Callers:
 *     sub_1400FC608 @ 0x1400FC608 (sub_1400FC608.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140078CD8 @ 0x140078CD8 (sub_140078CD8.c)
 *     sub_1400F7308 @ 0x1400F7308 (sub_1400F7308.c)
 *     sub_1400F7368 @ 0x1400F7368 (sub_1400F7368.c)
 *     sub_14012CBC8 @ 0x14012CBC8 (sub_14012CBC8.c)
 *     sub_14012F368 @ 0x14012F368 (sub_14012F368.c)
 */

__int64 __fastcall sub_14012DC60(__int64 *a1, __int64 a2)
{
  _QWORD *v2; // r14
  char v3; // r12
  int v6; // edi
  __int64 v7; // rdi
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v8; // rcx
  _BYTE *v9; // rdx
  __int64 v11; // rax
  BOOLEAN v12; // al
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // ecx
  __int64 v16; // r8
  int v17; // edx
  int v18; // edx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rdx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v22; // rcx
  int v23; // eax
  _QWORD *v24; // r10
  __int64 v25; // rax

  v2 = 0LL;
  v3 = 0;
  if ( byte_1401687E9 )
  {
LABEL_2:
    v6 = 0;
LABEL_12:
    v9 = (_BYTE *)a1[16];
    if ( v9[1] == 1 || **(_BYTE **)(*(_QWORD *)(a1[2] + 128) + 160LL) == 1 )
      *v9 = 0;
    return (unsigned int)v6;
  }
  v7 = *(_QWORD *)(a1[2] + 128);
  if ( (*(_DWORD *)(*(_QWORD *)(v7 + 400) + 184LL) & 0x40000000) == 0
    || (v11 = *(_QWORD *)(v7 + 160), *(_BYTE *)v11 == 1) && (*(_DWORD *)(v11 + 176) & 0x100) != 0 )
  {
    v6 = -1073741823;
    goto LABEL_5;
  }
  v12 = sub_1400F7308((__int64)a1);
  v13 = a1[16];
  if ( !v12 )
  {
    if ( *(_BYTE *)(v13 + 1) == 1 )
      return 3221225558LL;
    v18 = *(_DWORD *)(v13 + 136);
    if ( (v18 & 4) != 0 )
      v19 = v18 ^ (v18 ^ (*(_DWORD *)(a2 + 8) >> 1)) & 1;
    else
      v19 = v18 & 0xFFFFFFFE;
    *(_DWORD *)(v13 + 136) = v19;
    v20 = *(_QWORD *)(v7 + 160);
    v21 = 272LL;
    if ( (*(_DWORD *)(v20 + 176) & 0x20) != 0
      && *(_BYTE *)v20 == 1
      && (*(_DWORD *)(*(_QWORD *)(v20 + 8) + 20LL) & 0x80u) == 0 )
    {
      v3 = 1;
      v21 = 304LL;
    }
    v2 = (_QWORD *)sub_1400143E0(72LL, v21, 1330667858LL, a1[1]);
    if ( v2
      && (*(_QWORD *)(a1[16] + 40) = ExAllocateCacheAwareRundownProtection((POOL_TYPE)512, 0x4F506152u),
          (v22 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1[16] + 40)) != 0LL) )
    {
      ExWaitForRundownProtectionReleaseCacheAware(v22);
      v23 = *((_DWORD *)v2 + 8);
      *((_DWORD *)v2 + 4) = 0;
      *((_DWORD *)v2 + 5) = -1;
      *((_DWORD *)v2 + 8) = v23 & 0xFFFFFFF9 | 4;
      v2[11] = v2 + 10;
      v2[10] = v2 + 10;
      *((_BYTE *)v2 + 64) = 1;
      KeInitializeSpinLock(v2 + 12);
      v2[1] = v2 + 24;
      *((_DWORD *)v2 + 48) = 1;
      v24 = a1 + 1;
      *((_DWORD *)v2 + 49) = 16;
      *((_DWORD *)v2 + 50) = 1;
      *((_DWORD *)v2 + 53) = 32;
      *((_DWORD *)v2 + 52) = 1;
      *((_DWORD *)v2 + 54) = 1;
      *((_OWORD *)v2 + 14) = xmmword_1401545C8;
      v2[31] = 0LL;
      v2[32] = 0LL;
      *((_DWORD *)v2 + 60) = 1;
      *((_DWORD *)v2 + 61) = 32;
      *((_DWORD *)v2 + 66) = -1;
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 400) + 184LL) & 0x40000000) != 0 )
      {
        v25 = *(_QWORD *)(v7 + 160);
        if ( *(_BYTE *)v25 == 1 && (*(_DWORD *)(*(_QWORD *)(v25 + 8) + 20LL) & 0x200) != 0 )
        {
          *((_DWORD *)v2 + 51) |= 2u;
          v24 = a1 + 1;
        }
      }
      if ( v3 )
      {
        *((_DWORD *)v2 + 51) |= 0x100u;
        v2[35] = 0LL;
        v2[36] = 0LL;
        *((_DWORD *)v2 + 54) = 2;
        *((_DWORD *)v2 + 68) = 1;
        *((_DWORD *)v2 + 69) = 32;
        *((_DWORD *)v2 + 74) = -1;
        *((_DWORD *)v2 + 8) |= 0x200u;
      }
      v6 = sub_14012F368(*v24, v2 + 24, a1, v2);
      if ( v6 >= 0 )
      {
        PoFxSetComponentLatency(*v2, 0LL, -1LL);
        PoFxSetComponentResidency(*v2, 0LL, -1LL);
        *(_QWORD *)(a1[16] + 8) = v2;
        ExReInitializeRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1[16] + 40));
        *(_DWORD *)(*(_QWORD *)(a1[16] + 8) + 32LL) ^= (*(_DWORD *)(a2 + 8) ^ *(_DWORD *)(*(_QWORD *)(a1[16] + 8) + 32LL)) & 1;
        *(_DWORD *)(*(_QWORD *)(a1[16] + 8) + 24LL) = 0;
        if ( *((_DWORD *)v2 + 48) >= 2u && (*((_DWORD *)v2 + 51) & 0x10) != 0 )
          *((_DWORD *)v2 + 6) = *((_DWORD *)v2 + 52);
        if ( (*((_DWORD *)v2 + 51) & 2) != 0 )
          *((_DWORD *)v2 + 8) |= 0x400u;
        *(_DWORD *)(*(_QWORD *)(a1[16] + 8) + 20LL) = *(_DWORD *)(a2 + 12);
        sub_14012CBC8((__int64)a1, *(_DWORD *)(a2 + 12), 1);
        *(_BYTE *)(a1[16] + 1) = 1;
        if ( **(_BYTE **)(*(_QWORD *)(a1[2] + 128) + 160LL) == 1
          && !_InterlockedCompareExchange((volatile signed __int32 *)(a1[16] + 96), 1, 0) )
        {
          PoFxActivateComponent(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(a1[2] + 128) + 160LL) + 8LL), 0LL, 0LL);
        }
        PoFxStartDevicePowerManagement(**(_QWORD **)(a1[16] + 8));
        sub_140078CD8((struct _DEVICE_OBJECT *)a1[1], *(_BYTE *)(a1[16] + 136) & 1);
        goto LABEL_2;
      }
    }
    else
    {
      v6 = -1073741670;
    }
LABEL_5:
    v8 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1[16] + 40);
    if ( v8 )
    {
      ExFreeCacheAwareRundownProtection(v8);
      *(_QWORD *)(a1[16] + 40) = 0LL;
    }
    if ( v2 )
    {
      if ( *v2 )
        PoFxUnregisterDevice(*v2);
      ExFreePoolWithTag(v2, 0x4F506152u);
    }
    if ( v6 == -1073741738 )
      return (unsigned int)v6;
    goto LABEL_12;
  }
  v14 = *(_QWORD *)(v13 + 8);
  v15 = *(_DWORD *)(a2 + 12);
  if ( v15 != *(_DWORD *)(v14 + 20) )
  {
    *(_DWORD *)(v14 + 20) = v15;
    sub_14012CBC8((__int64)a1, *(_DWORD *)(a2 + 12), 0);
  }
  v16 = *(_QWORD *)(a1[16] + 8);
  v17 = *(_DWORD *)(v16 + 32);
  if ( (((unsigned __int8)v17 ^ *(_BYTE *)(a2 + 8)) & 1) != 0 )
    *(_DWORD *)(v16 + 32) = v17 ^ (v17 ^ *(_DWORD *)(a2 + 8)) & 1;
  sub_1400F7368((__int64)a1);
  return 0LL;
}
