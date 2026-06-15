/*
 * XREFs of sub_140072820 @ 0x140072820
 * Callers:
 *     sub_140070EE0 @ 0x140070EE0 (sub_140070EE0.c)
 * Callees:
 *     sub_140006470 @ 0x140006470 (sub_140006470.c)
 *     sub_1400066EC @ 0x1400066EC (sub_1400066EC.c)
 *     sub_140006980 @ 0x140006980 (sub_140006980.c)
 *     sub_140007CC0 @ 0x140007CC0 (sub_140007CC0.c)
 *     sub_1400115FC @ 0x1400115FC (sub_1400115FC.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140027AE0 @ 0x140027AE0 (sub_140027AE0.c)
 *     sub_140031778 @ 0x140031778 (sub_140031778.c)
 *     sub_140043F48 @ 0x140043F48 (sub_140043F48.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_14005A040 @ 0x14005A040 (sub_14005A040.c)
 *     sub_14005A470 @ 0x14005A470 (sub_14005A470.c)
 *     sub_1400B501C @ 0x1400B501C (sub_1400B501C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140072820(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int128 v5; // xmm0
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  int Instance; // ebx
  __int64 v16; // r10
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+30h] [rbp-168h] BYREF
  __int128 v24; // [rsp+38h] [rbp-160h]
  __int128 v25; // [rsp+48h] [rbp-150h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp-138h] BYREF

  v5 = *(_OWORD *)(a2 + 148);
  *(_OWORD *)(a1 + 104) = v5;
  v24 = v5;
  v25 = v5;
  EtwEventActivityIdControl(4LL, &v25);
  v10 = sub_140006470(v9);
  sub_140006980(&PerformanceCount, (LARGE_INTEGER)v10, "SaDevice_Initialize", 0LL);
  LOBYTE(v11) = 9;
  sub_1400B501C(v13, v12, v14, v11);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  v23 = (struct _RTL_CRITICAL_SECTION *)(a1 + 40);
  if ( !a4 )
  {
    Instance = -2147024809;
    goto LABEL_12;
  }
  Instance = CoCreateInstance(&stru_1400C7398, 0LL, 0x17u, &stru_1400C7388, (LPVOID *)(a1 + 184));
  if ( Instance < 0 )
    goto LABEL_12;
  *(_DWORD *)(a1 + 80) = a5;
  if ( *(_QWORD *)(a1 + 176) != a4 )
    sub_1400115FC((_QWORD *)(a1 + 176), a4);
  v16 = *(_QWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 136);
  Instance = sub_1400B6010(v16);
  if ( Instance < 0 )
    goto LABEL_12;
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(a1 + 208) = *(_DWORD *)(a2 + 100);
  v17 = sub_140027AE0(*(_QWORD *)(a2 + 56), a1);
  *(_DWORD *)(a1 + 196) = v17;
  if ( !v17 )
  {
    Instance = -2147024882;
LABEL_12:
    sub_1400B6010(a1);
    goto LABEL_13;
  }
  Instance = sub_140043F48(a1, a2, 1);
  if ( Instance < 0 )
    goto LABEL_12;
  if ( *(_DWORD *)(a1 + 208) == 1 )
    sub_140031778(a1, 3);
LABEL_13:
  LOBYTE(v21) = 10;
  sub_1400B501C(v19, v18, v20, v21);
  if ( Instance < 0 )
  {
    if ( off_1400E73D8 != (_UNKNOWN *)&off_1400E73D8
      && (*((_DWORD *)off_1400E73D8 + 7) & 0x200) != 0
      && *((_BYTE *)off_1400E73D8 + 25) >= 2u )
    {
      sub_14005A040(*((_QWORD *)off_1400E73D8 + 2), 0x10u, (__int64)&unk_1400C6808, Instance);
    }
    sub_14005A470("CSystemAudioDeviceSharedBase::Initialize", 193, Instance);
  }
  sub_140007CC0();
  sub_140018FF0(&v23);
  sub_1400066EC(&PerformanceCount);
  EtwEventActivityIdControl(4LL, &v25);
  return (unsigned int)Instance;
}
