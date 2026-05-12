/*
 * XREFs of sub_140127AAC @ 0x140127AAC
 * Callers:
 *     sub_1400EFBBC @ 0x1400EFBBC (sub_1400EFBBC.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14002D010 @ 0x14002D010 (sub_14002D010.c)
 *     sub_140056BCC @ 0x140056BCC (sub_140056BCC.c)
 *     sub_140072E00 @ 0x140072E00 (sub_140072E00.c)
 *     sub_140072EC4 @ 0x140072EC4 (sub_140072EC4.c)
 *     sub_140078CD8 @ 0x140078CD8 (sub_140078CD8.c)
 *     sub_140128094 @ 0x140128094 (sub_140128094.c)
 *     sub_14012F368 @ 0x14012F368 (sub_14012F368.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_140127AAC(__int64 a1, __int64 a2, bool *a3)
{
  _QWORD *v3; // r14
  __int64 v7; // rax
  int v9; // edi
  unsigned int v10; // eax
  size_t v11; // rdi
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v12; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v13; // rcx
  __int64 v14; // rax
  int v15; // r8d
  int v16; // r8d
  int *v17; // rax
  int *v18; // rbp
  int v19; // r8d
  __int64 v20; // rdx
  int v21; // ecx
  unsigned int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rax
  unsigned int v28; // [rsp+28h] [rbp-40h]
  __int64 v29; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0LL;
  v29 = 0LL;
  if ( byte_1401687E9 )
    return 0LL;
  v7 = *(_QWORD *)(a1 + 160);
  if ( *(_BYTE *)v7 == 1 )
  {
    if ( a3 )
      *a3 = (*(_DWORD *)(v7 + 176) & 8) != 0;
    return 0LL;
  }
  v9 = sub_14012F368(*(_QWORD *)(a1 + 8), a2, a1, &v29);
  if ( v9 >= 0 )
  {
    v10 = sub_140072EC4((int *)a2);
    v11 = v10;
    v3 = (_QWORD *)sub_1400143E0(72LL, v10 + 192, 1330667858LL, *(_QWORD *)(a1 + 8));
    if ( v3 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 160) + 80LL) = ExAllocateCacheAwareRundownProtection((POOL_TYPE)512, 0x4F506152u);
      v13 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*(_QWORD *)(a1 + 160) + 80LL);
      if ( v13 )
      {
        ExWaitForRundownProtectionReleaseCacheAware(v13);
        v14 = v29;
        v15 = *((_DWORD *)v3 + 5);
        *((_DWORD *)v3 + 17) = 0;
        v16 = v15 | 1;
        *v3 = v14;
        *((_DWORD *)v3 + 32) = -1;
        *((_DWORD *)v3 + 33) = -1;
        *((_BYTE *)v3 + 64) = 1;
        *((_DWORD *)v3 + 5) = v16;
        if ( (*(_DWORD *)(a2 + 12) & 2) != 0 )
          *((_DWORD *)v3 + 5) = v16 | 0x200;
        v17 = sub_14002D010((int *)a2, 0);
        v18 = v17;
        if ( v17 && sub_140072E00((__int64)v17) )
        {
          if ( v18[2] == 1 )
            *((_DWORD *)v3 + 5) = v19 | 0x80;
          v3[1] = v3 + 24;
          memmove(v3 + 24, (const void *)a2, v11);
          *(_DWORD *)(*(_QWORD *)(a1 + 160) + 176LL) &= ~8u;
          if ( (*(_BYTE *)(*(_QWORD *)(a1 + 160) + 176LL) & 0x10) != 0
            && (*(_BYTE *)(a2 + 12) & 4) != 0
            && (int)sub_140078CD8(*(struct _DEVICE_OBJECT **)(a1 + 8), 1) >= 0 )
          {
            *(_DWORD *)(*(_QWORD *)(a1 + 160) + 176LL) |= 8u;
            if ( a3 )
              *a3 = 1;
          }
          if ( (*(_DWORD *)(a2 + 12) & 8) != 0 )
            *(_DWORD *)(*(_QWORD *)(a1 + 160) + 176LL) |= 0x40u;
          if ( (*(_DWORD *)(a2 + 12) & 0x200) != 0 )
            *(_DWORD *)(*(_QWORD *)(a1 + 160) + 176LL) |= 0x80u;
          v20 = *(_QWORD *)(a1 + 160);
          v21 = *(_DWORD *)(v20 + 176);
          if ( (*(_BYTE *)(v20 + 176) & 9) == 9 && (*(_BYTE *)(a2 + 12) & 0x40) != 0 )
            v22 = v21 | 0x20;
          else
            v22 = v21 & 0xFFFFFFDF;
          *(_DWORD *)(v20 + 176) = v22;
          if ( (*(_DWORD *)(a2 + 12) & 0x40) != 0 )
            *(_DWORD *)(*(_QWORD *)(a1 + 160) + 176LL) |= 0x100u;
          v23 = *(_QWORD *)(a1 + 160);
          if ( (*(_DWORD *)(v23 + 176) & 0x120) == 0x120 )
          {
            *(_DWORD *)(v23 + 176) &= ~0x100u;
            v23 = *(_QWORD *)(a1 + 160);
          }
          if ( _bittest((const signed __int32 *)(a2 + 12), 0xAu) )
            *(_DWORD *)(v23 + 176) |= 0x200u;
          PoFxSetComponentLatency(*v3, 0LL, -1LL);
          PoFxSetComponentResidency(*v3, 0LL, -1LL);
          if ( !_bittest((const signed __int32 *)(*(_QWORD *)(a1 + 160) + 176LL), 0xAu)
            && *(_DWORD *)a2 >= 2u
            && (*(_DWORD *)(a2 + 12) & 0x10) != 0 )
          {
            *((_DWORD *)v3 + 32) = *(_DWORD *)(a2 + 16);
          }
          *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL) = v3;
          ExReInitializeRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(a1 + 160) + 80LL));
          **(_BYTE **)(a1 + 160) = 1;
          sub_140128094(a1, *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL) + 128LL), v24, 0LL);
          if ( byte_140168DAA )
          {
            v26 = *(unsigned int *)(a1 + 56);
            if ( (_DWORD)v26 != -1 && (byte_1401694F2 & 0x10) != 0 )
            {
              v27 = *(_QWORD *)(a1 + 160);
              v28 = (*(_DWORD *)(v27 + 176) >> 3) & 1;
              sub_140056BCC(
                v28,
                v26,
                v25,
                **(_QWORD **)(v27 + 8),
                v26,
                v28,
                *(_DWORD *)(*(_QWORD *)(v27 + 8) + 128LL),
                v18[2],
                (*(_DWORD *)(v27 + 176) >> 5) & 1);
            }
          }
          PoFxStartDevicePowerManagement(**(_QWORD **)(*(_QWORD *)(a1 + 160) + 8LL));
          return 0LL;
        }
        v9 = -1073741811;
      }
      else
      {
        v9 = -1073741670;
      }
    }
    else
    {
      v9 = -1056964605;
    }
  }
  if ( v29 )
    PoFxUnregisterDevice(v29);
  v12 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(*(_QWORD *)(a1 + 160) + 80LL);
  if ( v12 )
  {
    ExFreeCacheAwareRundownProtection(v12);
    *(_QWORD *)(*(_QWORD *)(a1 + 160) + 80LL) = 0LL;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4F506152u);
  return (unsigned int)v9;
}
