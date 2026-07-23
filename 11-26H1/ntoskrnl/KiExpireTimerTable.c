/*
 * XREFs of KiExpireTimerTable @ 0x1403B5450
 * Callers:
 *     KiTimerExpiration @ 0x1403B5048 (KiTimerExpiration.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessExpiredTimerList @ 0x1403B58FC (KiProcessExpiredTimerList.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall KiExpireTimerTable(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        unsigned __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  unsigned int v8; // ecx
  int v9; // ebx
  int v11; // r8d
  unsigned int v12; // edx
  unsigned int v13; // ebp
  unsigned __int64 result; // rax
  unsigned __int64 *v15; // rdi
  _QWORD *v16; // rsi
  unsigned int v17; // r13d
  volatile signed __int64 *v18; // r8
  _QWORD *v19; // rcx
  ULONG_PTR v20; // r13
  ULONG_PTR BugCheckParameter4; // r10
  __int64 v22; // r9
  __int64 v23; // r11
  volatile signed __int32 *v24; // rcx
  unsigned int v25; // esi
  __int64 v26; // r9
  volatile signed __int32 *v27; // rcx
  unsigned int v28; // esi
  unsigned int v29; // esi
  unsigned __int8 v30; // [rsp+30h] [rbp-98h]
  volatile signed __int64 *v31; // [rsp+38h] [rbp-90h]
  ULONG_PTR v32; // [rsp+40h] [rbp-88h]
  unsigned int v33; // [rsp+60h] [rbp-68h]
  int v35; // [rsp+D8h] [rbp+10h]
  int v36; // [rsp+E0h] [rbp+18h]
  unsigned int v37; // [rsp+E8h] [rbp+20h]
  char v38[8]; // [rsp+F0h] [rbp+28h]

  v8 = a4 + a3 - 1;
  v9 = a3 - 1;
  v11 = v8 + a5;
  v37 = v8;
  v12 = 0;
  v35 = v8 + a5;
  v13 = 0;
  v36 = 0;
  result = (unsigned __int64)a7 << 8;
  v38[0] = -64;
  while ( 1 )
  {
    v15 = (unsigned __int64 *)(a2 + 32 * ((unsigned __int8)++v9 + result + 16));
    if ( v13 <= v8 || (result = a6, v15[3] <= a6) )
    {
      v16 = v15 + 1;
      while ( 1 )
      {
        if ( v16 == (_QWORD *)*v16 )
        {
LABEL_5:
          v8 = v37;
          ++v13;
          v11 = v35;
          break;
        }
        v17 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
        {
          do
          {
            if ( (++v17 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v17);
            }
            else
            {
              _mm_pause();
            }
            result = *v15;
          }
          while ( *v15 );
        }
        v12 = v36;
        v18 = (volatile signed __int64 *)v15;
        v31 = (volatile signed __int64 *)v15;
        do
        {
          v19 = (_QWORD *)*v16;
          if ( v16 == (_QWORD *)*v16 )
            goto LABEL_18;
          result = *(v19 - 1);
          v20 = (ULONG_PTR)(v19 - 4);
          if ( result > a6 )
          {
            v15[3] = result;
LABEL_18:
            _InterlockedAnd64(v18, 0LL);
            goto LABEL_5;
          }
          v33 = 0;
          v38[0] ^= (v12 ^ v38[0]) & 0x3F;
          HIBYTE(v33) = *(_BYTE *)(v20 + 3) ^ v38[0];
          _InterlockedXor((volatile signed __int32 *)v20, v33);
          BugCheckParameter4 = _InterlockedExchange64((volatile __int64 *)(a2 + 8LL * v12), v20);
          v30 = *(_BYTE *)(v20 + 58);
          v32 = BugCheckParameter4;
          v22 = *v19;
          v23 = a2 + 32 * ((unsigned __int8)v9 + ((unsigned __int64)v30 << 8) + 16);
          if ( *(_QWORD **)(*v19 + 8LL) != v19 || (result = v19[1], *(_QWORD **)result != v19) )
            __fastfail(3u);
          *(_QWORD *)result = v22;
          *(_QWORD *)(v22 + 8) = result;
          if ( result != v22 )
            goto LABEL_25;
          *(_DWORD *)(v23 + 28) = -1;
          if ( !v30 )
          {
            v24 = (volatile signed __int32 *)(a2 + 32 * ((unsigned __int8)v9 + 272LL));
            v25 = 0;
LABEL_33:
            if ( _interlockedbittestandset64(v24, 0LL) )
            {
              while ( 1 )
              {
                if ( (++v25 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
                {
                  if ( KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    HvlNotifyLongSpinWait(v25);
                    v24 = (volatile signed __int32 *)(a2 + 32 * ((unsigned __int8)v9 + 272LL));
                    goto LABEL_36;
                  }
                  v24 = (volatile signed __int32 *)(a2 + 32 * ((unsigned __int8)v9 + 272LL));
                }
                _mm_pause();
LABEL_36:
                result = *(_QWORD *)v24;
                if ( !*(_QWORD *)v24 )
                  goto LABEL_33;
              }
            }
            v18 = v31;
            goto LABEL_39;
          }
          v24 = (volatile signed __int32 *)(a2 + 32 * ((unsigned __int8)v9 + 16LL));
          if ( _interlockedbittestandset64(v24, 0LL) )
          {
            _mm_pause();
LABEL_48:
            _InterlockedAnd64(v18, 0LL);
            v27 = (volatile signed __int32 *)(a2 + 32 * ((unsigned __int8)v9 + 16LL));
            v28 = 0;
            while ( 2 )
            {
              if ( _interlockedbittestandset64(v27, 0LL) )
              {
LABEL_50:
                if ( (++v28 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
                {
                  if ( KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    HvlNotifyLongSpinWait(v28);
                    v27 = (volatile signed __int32 *)(a2 + 32 * ((unsigned __int8)v9 + 16LL));
LABEL_52:
                    result = *(_QWORD *)v27;
                    if ( !*(_QWORD *)v27 )
                      continue;
                    goto LABEL_50;
                  }
                  v27 = (volatile signed __int32 *)(a2 + 32 * ((unsigned __int8)v9 + 16LL));
                }
                _mm_pause();
                goto LABEL_52;
              }
              break;
            }
            v29 = 0;
            v18 = (volatile signed __int64 *)(a2 + 32 * ((unsigned __int8)v9 + 272LL));
            v31 = v18;
            while ( 2 )
            {
              if ( !_interlockedbittestandset64((volatile signed __int32 *)v18, 0LL) )
              {
                v24 = (volatile signed __int32 *)(a2 + 32 * ((unsigned __int8)v9 + 16LL));
LABEL_39:
                v23 = a2 + 32 * ((unsigned __int8)v9 + ((unsigned __int64)v30 << 8) + 16);
                v16 = v15 + 1;
                BugCheckParameter4 = v32;
                v12 = v36;
                goto LABEL_40;
              }
LABEL_56:
              if ( (++v29 & HvlLongSpinCountMask) == 0 && (HvlEnlightenments & 0x40) != 0 )
              {
                if ( KiCheckVpBackingLongSpinWaitHypercall() )
                {
                  HvlNotifyLongSpinWait(v29);
                  v18 = (volatile signed __int64 *)(a2 + 32 * ((unsigned __int8)v9 + 272LL));
LABEL_58:
                  result = *v18;
                  if ( !*v18 )
                    continue;
                  goto LABEL_56;
                }
                v18 = (volatile signed __int64 *)(a2 + 32 * ((unsigned __int8)v9 + 272LL));
              }
              break;
            }
            _mm_pause();
            goto LABEL_58;
          }
          if ( !v24 )
            goto LABEL_48;
LABEL_40:
          if ( *(_DWORD *)(v23 + 28) != -1 )
            goto LABEL_44;
          result = a2 + 32 * ((unsigned __int8)v9 + ((v30 ^ 1LL) << 8) + 16);
          if ( *(_DWORD *)(result + 28) != -1 )
            goto LABEL_44;
          v26 = qword_140FC2698[2 * *(unsigned __int8 *)(a2 - 16432)];
          if ( KiSerializeTimerExpiration )
          {
            result = v9 & 0x3F;
            _interlockedbittestandreset64(
              (volatile signed __int32 *)(v26 + 8 * ((unsigned __int64)(unsigned __int8)v9 >> 6)),
              result);
LABEL_44:
            _InterlockedAnd64((volatile signed __int64 *)v24, 0LL);
            goto LABEL_25;
          }
          result = *(unsigned __int8 *)(a2 - 16431);
          _interlockedbittestandreset64(
            (volatile signed __int32 *)(((unsigned __int64)(unsigned __int8)v9 << 6) + v26),
            result);
          _InterlockedAnd64((volatile signed __int64 *)v24, 0LL);
LABEL_25:
          v36 = ++v12;
          if ( BugCheckParameter4 )
            KeBugCheckEx(0xC7u, 8uLL, 1uLL, v20, BugCheckParameter4);
        }
        while ( v12 != 64 );
        _InterlockedAnd64(v18, 0LL);
        result = KiProcessExpiredTimerList(a1, a8, a2, 64LL);
        v12 = 0;
        v36 = 0;
      }
    }
    if ( v9 == v11 )
      break;
    result = (unsigned __int64)a7 << 8;
  }
  if ( v12 )
    return KiProcessExpiredTimerList(a1, a8, a2, v12);
  return result;
}
