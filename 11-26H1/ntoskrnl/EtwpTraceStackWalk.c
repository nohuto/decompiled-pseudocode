/*
 * XREFs of EtwpTraceStackWalk @ 0x14020A6A0
 * Callers:
 *     EtwpStackWalkApc @ 0x14020A2E0 (EtwpStackWalkApc.c)
 *     EtwpStackTraceDispatcher @ 0x14020A480 (EtwpStackTraceDispatcher.c)
 * Callees:
 *     EtwpExpandStackAndWalkFrameChain @ 0x140260610 (EtwpExpandStackAndWalkFrameChain.c)
 *     KeQueryCurrentStackInformationEx @ 0x1402634E0 (KeQueryCurrentStackInformationEx.c)
 *     EtwpTraceStackKey @ 0x14032E770 (EtwpTraceStackKey.c)
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     EtwpGetStackLookasideListEntry @ 0x140467D30 (EtwpGetStackLookasideListEntry.c)
 *     EtwpReleaseStackLookasideListEntry @ 0x14047397C (EtwpReleaseStackLookasideListEntry.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KeGetCurrentStackPointer @ 0x14072BF60 (KeGetCurrentStackPointer.c)
 *     PsPicoWalkUserStack @ 0x140B4C1D8 (PsPicoWalkUserStack.c)
 */

__int64 __fastcall EtwpTraceStackWalk(int *a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  __int64 CurrentStackPointer; // rax
  __int64 result; // rax
  int v8; // ecx
  int v9; // r8d
  _SLIST_ENTRY *v10; // r13
  PVOID *v11; // r12
  unsigned int v12; // esi
  int v13; // r14d
  unsigned int v14; // r15d
  unsigned int v15; // r8d
  unsigned int v16; // r15d
  unsigned int v17; // r14d
  unsigned int v18; // edi
  int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // [rsp+30h] [rbp-49h] BYREF
  __int64 v22; // [rsp+38h] [rbp-41h] BYREF
  __int64 v23; // [rsp+40h] [rbp-39h] BYREF
  __int64 v24; // [rsp+48h] [rbp-31h]
  _QWORD *v25; // [rsp+50h] [rbp-29h]
  __int128 v26; // [rsp+58h] [rbp-21h] BYREF
  __int64 v27; // [rsp+68h] [rbp-11h]
  _QWORD v28[3]; // [rsp+70h] [rbp-9h] BYREF
  int v29; // [rsp+88h] [rbp+Fh]
  int v30; // [rsp+8Ch] [rbp+13h]

  v25 = a4;
  v23 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v24 = a3;
  CurrentStackPointer = KeGetCurrentStackPointer();
  result = KeQueryCurrentStackInformationEx(CurrentStackPointer, (char *)&v21 + 4, &v23, &v22);
  if ( !(_BYTE)result )
    return result;
  result = HIDWORD(v21);
  if ( HIDWORD(v21) <= 9 )
  {
    v8 = 929;
    if ( _bittest(&v8, HIDWORD(v21)) )
      return result;
  }
  result = EtwpGetStackLookasideListEntry();
  v10 = (_SLIST_ENTRY *)result;
  if ( !result )
    return result;
  v11 = (PVOID *)(result + 32);
  v12 = 0;
  v13 = 0;
  if ( (a1[204] & 0x40000000) != 0 && (a2 & 0x800) != 0 )
  {
    v12 = 1;
    *v11 = PsNtosImageBase;
    a2 &= ~0x800u;
  }
  if ( (a2 & 0x800) != 0 )
  {
    v14 = (a2 >> 20) & 0xF;
    _InterlockedIncrement(a1 + 256);
    result = EtwpExpandStackAndWalkFrameChain(v11, v14 + 256, (__int64)&v21);
    if ( (int)result < 0 )
      goto LABEL_20;
    if ( (unsigned int)v21 <= v14 )
      v12 = 0;
    else
      v12 = v21 - v14;
  }
  if ( (a2 & 0x1000) != 0 )
  {
    v15 = 256 - v12;
    if ( !KeGetCurrentThread()->ApcState.Process[3].Padding[5] )
    {
      v16 = HIWORD(a2) & 0xF;
      _InterlockedIncrement(a1 + 256);
      result = EtwpExpandStackAndWalkFrameChain(&v11[v12], v16 + v15, (__int64)&v21);
      if ( (int)result >= 0 )
      {
        if ( (unsigned int)v21 <= v16 )
          v13 = 0;
        else
          v13 = v21 - v16;
        goto LABEL_15;
      }
LABEL_20:
      _InterlockedIncrement(a1 + 257);
      return result;
    }
    v13 = PsPicoWalkUserStack(&v11[v12], v15);
  }
LABEL_15:
  v17 = v12 + v13;
  if ( v17 )
  {
    v18 = a2 & 0xFFFFE600 | 2;
    v28[1] = 16LL;
    DWORD2(v26) = *(_DWORD *)(v24 + 1288);
    HIDWORD(v26) = *(_DWORD *)(v24 + 1296);
    *(_QWORD *)&v26 = *v25;
    v28[0] = &v26;
    if ( (a1[204] & 0x1000000) == 0
      || v17 < 4
      || (LOWORD(v9) = 6182 - (v12 != 0),
          !(unsigned __int8)EtwpTraceStackKey((_DWORD)a1, v18, v9, (unsigned int)v28, (__int64)v11, v17)) )
    {
      v19 = *a1;
      v30 = 0;
      v20 = *((_QWORD *)a1 + 170);
      v29 = 8 * v17;
      v28[2] = v11;
      EtwpLogKernelEvent((unsigned int)v28, v20, v19, 2, 6176, v18);
    }
  }
  return EtwpReleaseStackLookasideListEntry(v10);
}
