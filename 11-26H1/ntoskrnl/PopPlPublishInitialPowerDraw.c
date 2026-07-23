/*
 * XREFs of PopPlPublishInitialPowerDraw @ 0x1406155C0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     _tlgWriteEx_EtwWriteEx @ 0x1404DC958 (_tlgWriteEx_EtwWriteEx.c)
 *     PopPlPublishSystemPowerChange @ 0x140615730 (PopPlPublishSystemPowerChange.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PopPlPublishInitialPowerDraw(__int64 a1, int *a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned int i; // esi
  unsigned __int16 *v6; // rcx
  int v7; // edx
  __int64 v8; // rax
  int v9; // ecx
  int v10; // [rsp+20h] [rbp-99h]
  int v11; // [rsp+28h] [rbp-91h]
  __int16 v12; // [rsp+40h] [rbp-79h] BYREF
  int v13; // [rsp+44h] [rbp-75h] BYREF
  int v14; // [rsp+48h] [rbp-71h] BYREF
  int v15; // [rsp+4Ch] [rbp-6Dh] BYREF
  int v16; // [rsp+50h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+60h] [rbp-59h] BYREF
  __int16 *v18; // [rsp+80h] [rbp-39h]
  __int64 v19; // [rsp+88h] [rbp-31h]
  _DWORD *v20; // [rsp+90h] [rbp-29h]
  __int64 v21; // [rsp+98h] [rbp-21h]
  __int64 v22; // [rsp+A0h] [rbp-19h]
  _DWORD v23[2]; // [rsp+A8h] [rbp-11h] BYREF
  int *v24; // [rsp+B0h] [rbp-9h]
  __int64 v25; // [rsp+B8h] [rbp-1h]
  int *v26; // [rsp+C0h] [rbp+7h]
  __int64 v27; // [rsp+C8h] [rbp+Fh]
  int *v28; // [rsp+D0h] [rbp+17h]
  __int64 v29; // [rsp+D8h] [rbp+1Fh]
  int *v30; // [rsp+E0h] [rbp+27h]
  __int64 v31; // [rsp+E8h] [rbp+2Fh]

  v3 = *((_QWORD *)a2 + 1);
  v4 = 0LL;
  for ( i = *a2; v4 < *(_QWORD *)(v3 + 48); ++v4 )
  {
    v6 = *(unsigned __int16 **)(*(_QWORD *)(v3 + 56) + 8 * v4);
    if ( !*((_QWORD *)v6 + 3) )
    {
      v7 = *((_DWORD *)v6 + 10);
      i += v7;
      *((_DWORD *)v6 + 8) = v7;
      if ( (unsigned int)dword_140E07560 > 5 )
      {
        v14 = v7;
        v18 = &v12;
        v12 = 1;
        v20 = v23;
        v22 = *((_QWORD *)v6 + 1);
        v23[0] = *v6;
        v24 = &v13;
        v26 = &v14;
        v28 = &v15;
        v8 = *((_QWORD *)v6 + 2);
        v19 = 2LL;
        v21 = 2LL;
        v23[1] = 0;
        v13 = 0;
        v25 = 4LL;
        v27 = 4LL;
        v15 = 0;
        v29 = 4LL;
        v9 = *(_DWORD *)(v8 + 28);
        v30 = &v16;
        v16 = v9;
        v31 = 4LL;
        tlgWriteEx_EtwWriteEx((__int64)&dword_140E07560, (unsigned __int8 *)&word_1400512DA, a3, 1u, v10, v11, 9u, &v17);
      }
    }
  }
  PopPlPublishSystemPowerChange(v3, i);
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 16), *(_BYTE *)(v3 + 24));
}
