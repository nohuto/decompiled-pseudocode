/*
 * XREFs of sub_1400CD684 @ 0x1400CD684
 * Callers:
 *     sub_1400D1EB8 @ 0x1400D1EB8 (sub_1400D1EB8.c)
 *     sub_1400D3FBC @ 0x1400D3FBC (sub_1400D3FBC.c)
 *     sub_1400D9E8C @ 0x1400D9E8C (sub_1400D9E8C.c)
 *     sub_1400DA194 @ 0x1400DA194 (sub_1400DA194.c)
 *     sub_1400DE5E8 @ 0x1400DE5E8 (sub_1400DE5E8.c)
 *     sub_1400DEB08 @ 0x1400DEB08 (sub_1400DEB08.c)
 *     NaptrDnsRecordConvert @ 0x1400DF8C8 (NaptrDnsRecordConvert.c)
 *     sub_1400E3E6C @ 0x1400E3E6C (sub_1400E3E6C.c)
 *     sub_1400E4050 @ 0x1400E4050 (sub_1400E4050.c)
 *     sub_1400E69E8 @ 0x1400E69E8 (sub_1400E69E8.c)
 *     sub_1400E6EA4 @ 0x1400E6EA4 (sub_1400E6EA4.c)
 * Callees:
 *     sub_1400D2AE0 @ 0x1400D2AE0 (sub_1400D2AE0.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1400CD684(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  int v6; // ebx
  __int64 v7; // r9
  bool v8; // bl
  int *v9; // rax
  __int64 v10; // rcx
  void (__fastcall *v11)(__int64, _QWORD, __int64); // rax
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // r9
  __int64 v15; // rdx
  void (__fastcall *v16)(__int64, _QWORD, __int64); // rax

  v3 = a2;
  if ( (a1[36] & 0x1000LL) != 0 )
  {
    v5 = *(_QWORD *)(a2 + 168);
    if ( *(_BYTE *)(v5 + 2) == 40 )
      v6 = *(_DWORD *)(v5 + 24);
    else
      v6 = *(_DWORD *)(v5 + 12);
    v7 = *(_QWORD *)(a2 + 104);
    v8 = (v6 & 0x40) != 0;
    if ( v7 )
    {
      v9 = a1 + 286;
      if ( a1 != (_DWORD *)-1144LL )
      {
        v10 = *(_QWORD *)v9;
        if ( *(_QWORD *)v9 )
        {
          a3 = *(_QWORD *)(v10 + 8);
          if ( a3 )
          {
            if ( v9[7] >= 3 && (v11 = *(void (__fastcall **)(__int64, _QWORD, __int64))(a3 + 240)) != 0LL )
            {
              LOBYTE(a3) = v8;
              v11(v10, *(_QWORD *)(a2 + 104), a3);
            }
            else
            {
              LOBYTE(a3) = 1;
              LOBYTE(a2) = v8;
              KeFlushIoBuffers(v7, a2, a3);
            }
          }
        }
      }
    }
    v12 = *(_QWORD *)(v3 + 136);
    if ( v12 )
    {
      v13 = (__int64 *)(a1 + 286);
      if ( a1 != (_DWORD *)-1144LL )
      {
        v14 = *v13;
        if ( *v13 )
        {
          v15 = *(_QWORD *)(v14 + 8);
          if ( v15 )
          {
            if ( (int)a1[293] >= 3 && (v16 = *(void (__fastcall **)(__int64, _QWORD, __int64))(v15 + 240)) != 0LL )
            {
              LOBYTE(a3) = v8;
              v16(v14, *(_QWORD *)(v3 + 136), a3);
            }
            else
            {
              LOBYTE(a3) = 1;
              LOBYTE(v15) = v8;
              KeFlushIoBuffers(v12, v15, a3);
            }
          }
        }
      }
    }
  }
  return sub_1400D2AE0(a1, v3);
}
