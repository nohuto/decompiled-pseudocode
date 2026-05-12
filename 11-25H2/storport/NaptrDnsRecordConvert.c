/*
 * XREFs of NaptrDnsRecordConvert @ 0x1400DF8C8
 * Callers:
 *     sub_1400E2990 @ 0x1400E2990 (sub_1400E2990.c)
 *     sub_1400E63C4 @ 0x1400E63C4 (sub_1400E63C4.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400161E0 @ 0x1400161E0 (sub_1400161E0.c)
 *     sub_140017C40 @ 0x140017C40 (sub_140017C40.c)
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 *     sub_14007B110 @ 0x14007B110 (sub_14007B110.c)
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400CAA3C @ 0x1400CAA3C (sub_1400CAA3C.c)
 *     sub_1400CD684 @ 0x1400CD684 (sub_1400CD684.c)
 *     sub_1400D3FBC @ 0x1400D3FBC (sub_1400D3FBC.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall NaptrDnsRecordConvert(__int64 a1)
{
  __int64 v1; // r15
  __int64 v3; // rsi
  __int64 v4; // rbp
  void *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rbx
  int v8; // edi
  unsigned int v9; // r8d
  unsigned int i; // ecx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rdi
  void *v18; // r12
  __int64 v19; // r8
  int v20; // eax
  struct _UNICODE_STRING v21; // [rsp+A0h] [rbp-E8h] BYREF
  struct _STRING DestinationString; // [rsp+B0h] [rbp-D8h] BYREF
  _WORD v23[64]; // [rsp+D0h] [rbp-B8h] BYREF

  v1 = *(_QWORD *)(a1 + 88);
  DestinationString = 0LL;
  v3 = 0LL;
  v21 = 0LL;
  v4 = *(_QWORD *)(v1 + 128);
  v5 = 0LL;
  v6 = sub_14007B110(v1, 1);
  v7 = v6;
  if ( !v6 )
    goto LABEL_2;
  if ( *(_BYTE *)(v6 + 2) == 40 )
  {
    v9 = *(_DWORD *)(v6 + 56);
    if ( v9 )
    {
      for ( i = 0; i < v9; ++i )
      {
        v11 = *(unsigned int *)(v7 + 4LL * i + 120);
        if ( (unsigned int)v11 >= 0x80 && (unsigned int)v11 < *(_DWORD *)(v7 + 16) )
        {
          v12 = v7 + v11;
          if ( *(_DWORD *)(v7 + v11) == 68 )
            goto LABEL_12;
        }
      }
    }
  }
  v12 = 0LL;
LABEL_12:
  *(_DWORD *)(v12 + 16) = 4;
  v13 = sub_1400143E0(64LL, 88LL, 1179541842LL, *(_QWORD *)(v4 + 8));
  v3 = v13;
  if ( !v13 )
    goto LABEL_2;
  *(_DWORD *)v13 = 5767169;
  *(_QWORD *)(v13 + 8) = *(_QWORD *)(v1 + 560);
  *(_WORD *)(v13 + 4) = *(_WORD *)(a1 + 136);
  v14 = 316LL;
  if ( *(_DWORD *)v4 != 1314275652 )
    v14 = 524LL;
  v15 = sub_1400CAA3C(524LL, ((*(_DWORD *)(v14 + v4) + 7) & 0xFFFFFFF8) + 1184);
  v5 = (void *)v15;
  if ( !v15 )
  {
LABEL_2:
    LOBYTE(v8) = 23;
    goto LABEL_22;
  }
  v17 = v15 + 48;
  sub_140017C40(v15 + 48, v16, 0, 0LL);
  *(_BYTE *)(v17 + 17) |= 0x20u;
  *(_QWORD *)(v17 + 184) = v3;
  *(_QWORD *)(v17 + 168) = v7;
  *(_QWORD *)(v17 + 216) = v4;
  *(_QWORD *)(v17 + 784) = v1;
  *(_QWORD *)(v7 + 96) = v17;
  *(_QWORD *)(v7 + 64) = v3;
  *(_DWORD *)(v7 + 60) = 88;
  *(_DWORD *)(v7 + 24) = 256;
  *(_DWORD *)(v7 + 40) = 10;
  sub_1400161E0((int *)v4, v7, (__int64)v5 + 1184);
  v18 = (void *)(v17 + 664);
  KeInitializeEvent((PRKEVENT)(v17 + 664), NotificationEvent, 0);
  *(_QWORD *)(v17 + 656) = sub_140038660;
  if ( (*(_DWORD *)(v4 + 144) & 0x1000LL) != 0 )
    v20 = sub_1400D3FBC((_DWORD *)v4, v17);
  else
    v20 = sub_1400CD684((_DWORD *)v4, v17, v19);
  v8 = v20;
  if ( v20 >= 0 )
  {
    KeWaitForSingleObject(v18, Executive, 0, 0, 0LL);
    v8 = sub_1400229C8(*(_BYTE *)(v7 + 3));
  }
  *(_WORD *)(a1 + 148) = 0;
  if ( v8 < 0 )
  {
LABEL_22:
    RtlInitAnsiString(&DestinationString, (PCSZ)(v3 + 20));
    v21.MaximumLength = 128;
    v21.Buffer = v23;
    RtlAnsiStringToUnicodeString(&v21, &DestinationString, 0);
    sub_1400A870C(
      v1,
      1,
      3,
      (__int64)L"Controller drain queue failure",
      L"QueueId",
      *(_WORD *)(a1 + 136),
      L"Status",
      v8,
      L"TransportErrorCode",
      *(_DWORD *)(v3 + 16),
      v23,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
    if ( !v5 )
      goto LABEL_24;
  }
  MmFreeContiguousMemory(v5);
LABEL_24:
  ExFreePoolWithTag((PVOID)v3, 0x464E6152u);
  if ( v7 )
    ExFreePoolWithTag((PVOID)v7, 0x72536152u);
}
