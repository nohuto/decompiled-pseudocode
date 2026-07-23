/*
 * XREFs of MiFinishCreateSection @ 0x14098BADC
 * Callers:
 *     MiCreateSection @ 0x14098B4B4 (MiCreateSection.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     MiInsertBasedSection @ 0x140777714 (MiInsertBasedSection.c)
 *     ObCreateObjectEx @ 0x14092D760 (ObCreateObjectEx.c)
 *     MiCreatePerSessionProtos @ 0x1409A0A14 (MiCreatePerSessionProtos.c)
 *     MiDereferencePerSessionProtos @ 0x140A9AEB4 (MiDereferencePerSessionProtos.c)
 *     ObCheckActiveHandles @ 0x140AF6940 (ObCheckActiveHandles.c)
 *     MiDereferenceFailedControlArea @ 0x140B275E4 (MiDereferenceFailedControlArea.c)
 */

__int64 __fastcall MiFinishCreateSection(int *a1)
{
  volatile signed __int32 *v1; // rdi
  __int64 v3; // rbp
  unsigned int v4; // eax
  int v5; // edx
  bool v6; // zf
  __int64 v7; // r8
  char v8; // r14
  int v9; // r8d
  int v10; // r9d
  __int64 *v11; // rax
  __int64 v12; // rdx
  int v13; // ebp
  __int64 v14; // r8
  struct _KLOCK_ENTRIES *v15; // r9
  _OWORD *v16; // rsi
  int PerSessionProtos; // esi
  int v19; // ecx
  int inserted; // edi
  int v21; // ecx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // [rsp+20h] [rbp-48h]
  PVOID Object; // [rsp+70h] [rbp+8h] BYREF

  v1 = (volatile signed __int32 *)*((_QWORD *)a1 + 8);
  Object = 0LL;
  v3 = *(_QWORD *)v1;
  *((_QWORD *)a1 + 15) = v1;
  v4 = v1[14] & 0xFFF7FFFF;
  v5 = a1[35] & 0x7FFFFFFF;
  a1[34] = v4;
  v6 = (a1[4] & 0x1000000) == 0;
  a1[35] = v5;
  if ( !v6 )
  {
    v21 = *a1;
    if ( (v21 & 0x200) == 0 )
      a1[34] = v4 | 0x80000;
    if ( *((_BYTE *)a1 + 24) <= 1u && (v21 & 0x40000) == 0 )
      a1[35] = v5 | 0x80000000;
  }
  if ( (v1[14] & 8) != 0 && (v1[14] & 0x20) != 0 )
  {
    PerSessionProtos = MiCreatePerSessionProtos(v1, (unsigned int)a1[42]);
    if ( PerSessionProtos < 0 )
    {
      ObfDereferenceObjectWithTag(*((PVOID *)a1 + 7), 0x43536D4Du);
      goto LABEL_21;
    }
    a1[35] ^= (a1[35] ^ (a1[42] << 12)) & 0x7FFFF000;
  }
  else if ( !*((_QWORD *)a1 + 6) && (a1[7] & 0x44) != 0 && (v1[14] & 0x20) == 0 )
  {
    if ( *((_QWORD *)v1 + 8) )
    {
      a1[34] |= 0x40000000u;
      _InterlockedIncrement(v1 + 23);
      if ( !(unsigned __int8)ObCheckActiveHandles(*((_QWORD *)a1 + 7)) )
      {
        _InterlockedDecrement(v1 + 23);
        ObfDereferenceObjectWithTag(*((PVOID *)a1 + 7), 0x43536D4Du);
        PerSessionProtos = -1073741788;
LABEL_21:
        MiDereferenceFailedControlArea(a1);
        return (unsigned int)PerSessionProtos;
      }
    }
  }
  v7 = *((_QWORD *)a1 + 7);
  v8 = 0;
  if ( v7 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 8) + 52LL) & 0x10) != 0 )
      v8 = 1;
    else
      ObfDereferenceObjectWithTag(*((PVOID *)a1 + 7), 0x43536D4Du);
  }
  v9 = 128;
  if ( (v1[14] & 0x20) == 0 && *((_QWORD *)v1 + 8) )
  {
    v10 = 0;
    v9 = 160 * *((_DWORD *)v1 + 74) + 152;
  }
  else
  {
    v10 = 8 * *(_DWORD *)(v3 + 8) + 64;
    v11 = (__int64 *)(v1 + 32);
    do
    {
      v11 = (__int64 *)v11[2];
      v9 += 56;
    }
    while ( v11 );
  }
  v13 = ObCreateObjectEx(
          *((_BYTE *)a1 + 72),
          MmSectionObjectType,
          *((_QWORD *)a1 + 1),
          *((_BYTE *)a1 + 72),
          v24,
          64,
          v10,
          v9,
          &Object,
          0LL);
  if ( v13 < 0 )
  {
    if ( (a1[34] & 0x40000000) != 0 )
    {
      _InterlockedDecrement(v1 + 23);
    }
    else if ( (v1[14] & 8) != 0 && (v1[14] & 0x20) != 0 )
    {
      MiDereferencePerSessionProtos(v1, ((unsigned int)a1[35] >> 12) & 0x7FFFF);
    }
    if ( v8 )
      ObfDereferenceObjectWithTag(*((PVOID *)a1 + 7), 0x43536D4Du);
    PerSessionProtos = v13;
    goto LABEL_21;
  }
  v16 = Object;
  *(_OWORD *)Object = *((_OWORD *)a1 + 5);
  v16[1] = *((_OWORD *)a1 + 6);
  v16[2] = *((_OWORD *)a1 + 7);
  v16[3] = *((_OWORD *)a1 + 8);
  *((_QWORD *)v16 + 3) = 0LL;
  if ( v8 )
  {
    v22 = *((_QWORD *)a1 + 7);
    *((_QWORD *)v16 + 5) = v22;
    if ( (v1[14] & 0x20) != 0 )
      v23 = v22 | 1;
    else
      v23 = v22 | 2;
    *((_QWORD *)v16 + 5) = v23;
  }
  if ( (*a1 & 1) != 0 )
    goto LABEL_16;
  v19 = *((_DWORD *)v16 + 14) | 0x10000;
  *((_DWORD *)v16 + 14) = v19;
  if ( (a1[4] & 0x400000) != 0 )
  {
    v19 |= 0x4000u;
    *((_DWORD *)v16 + 14) = v19;
  }
  if ( (a1[4] & 0x200000) == 0
    || (*((_DWORD *)v16 + 14) = v19 | 0x40, inserted = MiInsertBasedSection(v16, v12, v14, v15), inserted >= 0) )
  {
LABEL_16:
    *((_QWORD *)a1 + 18) = v16;
    return (unsigned int)v13;
  }
  else
  {
    ObfDereferenceObjectWithTag(v16, 0x43536D4Du);
    return (unsigned int)inserted;
  }
}
