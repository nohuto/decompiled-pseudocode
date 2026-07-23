/*
 * XREFs of AlpcpProbeMessageAttributes @ 0x140925AE0
 * Callers:
 *     AlpcpProcessConnectionRequest @ 0x1408EDC14 (AlpcpProcessConnectionRequest.c)
 *     AlpcpReceiveMessage @ 0x140927FFC (AlpcpReceiveMessage.c)
 *     AlpcpCaptureAttributes @ 0x14098F668 (AlpcpCaptureAttributes.c)
 * Callees:
 *     RtlReadUCharFromUser @ 0x14078201C (RtlReadUCharFromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteUCharToUser @ 0x140782210 (RtlWriteUCharToUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     ExRaiseAccessViolation @ 0x140925D30 (ExRaiseAccessViolation.c)
 */

__int64 __fastcall AlpcpProbeMessageAttributes(int a1, unsigned int *a2, char a3)
{
  unsigned __int64 v5; // rbx
  int ULongFromUser; // eax
  unsigned int v7; // esi
  ULONG v8; // r8d
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  SIZE_T v15; // rdx
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rdi
  char UCharFromUser; // al
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  unsigned int v24; // eax

  v5 = (unsigned __int64)a2;
  ULongFromUser = RtlReadULongFromUser(a2);
  v7 = ULongFromUser;
  if ( a1 >= 0 || (a1 & 0x40000000) != 0 )
  {
    v8 = 8;
    v9 = ((ULongFromUser >> 31) & 0x18) + 8;
    v10 = v9 + 32;
    if ( (v7 & 0x40000000) == 0 )
      v10 = v9;
    v11 = v10 + 32;
    if ( (v7 & 0x20000000) == 0 )
      v11 = v10;
    v12 = v11 + 24;
    if ( (v7 & 0x10000000) == 0 )
      v12 = v11;
    v13 = v12 + 24;
    if ( (v7 & 0x8000000) == 0 )
      v13 = v12;
    v14 = v13 + 8;
    if ( (v7 & 0x4000000) == 0 )
      v14 = v13;
    v15 = v14 + 8;
    if ( (v7 & 0x2000000) == 0 )
      v15 = v14;
  }
  else
  {
    v8 = 4;
    v20 = ((ULongFromUser >> 31) & 0xC) + 8;
    v21 = v20 + 16;
    if ( (v7 & 0x40000000) == 0 )
      v21 = v20;
    v22 = v21 + 20;
    if ( (v7 & 0x20000000) == 0 )
      v22 = v21;
    v23 = v22 + 16;
    if ( (v7 & 0x10000000) == 0 )
      v23 = v22;
    v24 = v23 + 24;
    if ( (v7 & 0x8000000) == 0 )
      v24 = v23;
    v15 = v24 + 8;
    if ( (v7 & 0x2000000) == 0 )
      v15 = v24;
  }
  if ( a3 || (v7 & 0xA0000000) != 0 )
  {
    if ( ((v8 - 1) & (unsigned int)v5) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = v15 + v5;
    if ( v15 + v5 <= v5 )
    {
      if ( v15 || v16 >= 0x7FFFFFFF0000LL )
LABEL_20:
        ExRaiseAccessViolation();
    }
    else if ( v16 > 0x7FFFFFFF0000LL )
    {
      goto LABEL_20;
    }
    v17 = ((v16 - 1) & 0xFFFFFFFFFFFFF000uLL) + 4096;
    do
    {
      UCharFromUser = RtlReadUCharFromUser((volatile void *)v5);
      RtlWriteUCharToUser((_BYTE *)v5, UCharFromUser);
      v5 = (v5 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    while ( v5 != v17 );
    return v7;
  }
  if ( v15 && v15 < 0x10000 )
    v15 = 1LL;
  ProbeForRead((volatile void *)v5, v15, v8);
  return v7;
}
