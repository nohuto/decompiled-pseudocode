/*
 * XREFs of RootHub_ForceU3 @ 0x14000515C
 * Callers:
 *     RootHub_HandleResumedPorts @ 0x140004D8C (RootHub_HandleResumedPorts.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x140008EA0 (WPP_RECORDER_SF_D.c)
 *     XilRegister_WriteUlong @ 0x140008FA4 (XilRegister_WriteUlong.c)
 *     XilRegister_ReadUlong @ 0x14000B620 (XilRegister_ReadUlong.c)
 *     RootHub_AcquireReadModifyWriteLock @ 0x14000D648 (RootHub_AcquireReadModifyWriteLock.c)
 *     RootHub_ReleaseReadModifyWriteLock @ 0x14000D784 (RootHub_ReleaseReadModifyWriteLock.c)
 *     RootHub_ForceU0AndWait @ 0x14002C35C (RootHub_ForceU0AndWait.c)
 */

__int64 __fastcall RootHub_ForceU3(_QWORD *a1, int a2)
{
  _QWORD *v3; // r14
  __int64 v4; // rcx
  unsigned int v5; // ebx
  _QWORD *v7; // rdi
  __int64 v8; // r12
  __int64 v9; // r15
  __int64 v10; // rbp
  __int64 result; // rax
  int Ulong; // eax
  int v13; // ebx
  void *v14; // rdx
  _QWORD *v15; // rbp
  _QWORD *v16; // r14
  unsigned int v17; // ebx
  int v18; // edx
  __int64 v19; // [rsp+60h] [rbp+8h]

  v3 = a1 + 1;
  v4 = a1[1];
  v5 = a2 - 1;
  v7 = v3;
  v8 = a1[6];
  v9 = a1[5] + 16LL * (unsigned int)(a2 - 1);
  v19 = *(_QWORD *)(v4 + 88);
  v10 = 120LL * (unsigned int)(a2 - 1);
  if ( *(_BYTE *)(v8 + v10 + 13) == 2 )
  {
    if ( (*(_QWORD *)(v4 + 736) & 0x8000000LL) != 0 )
    {
      result = RootHub_ForceU0AndWait(a1);
      if ( (int)result < 0 )
        return result;
      v7 = a1 + 1;
    }
  }
  else if ( (*(_QWORD *)(v4 + 736) & 0x80000LL) != 0 )
  {
    result = RootHub_ForceU0AndWait(a1);
    if ( (int)result < 0 )
      return result;
  }
  RootHub_AcquireReadModifyWriteLock(a1, v5);
  *(_BYTE *)(v8 + v10 + 18) = 0;
  Ulong = XilRegister_ReadUlong(v19, v9);
  v13 = Ulong;
  v14 = &WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_D(
      *(_QWORD *)(*v3 + 72LL),
      (_DWORD)v14,
      11,
      235,
      (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
      Ulong);
    v14 = &WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids;
  }
  v15 = v7;
  if ( (v13 & 2) == 0 )
    goto LABEL_12;
  v16 = v7;
  if ( (v13 & 0x1E0u) >= 0x60 )
  {
    v15 = a1 + 1;
LABEL_12:
    v16 = v7;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 3;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*v7 + 72LL),
        (_DWORD)v14,
        11,
        236,
        (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids);
      v16 = v15;
    }
  }
  v17 = v13 & 0xE00C200 | 0x10060;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_D(
      *(_QWORD *)(*v16 + 72LL),
      (_DWORD)v14,
      11,
      237,
      (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
      v17);
  }
  XilRegister_WriteUlong(v19, v9, v17);
  RootHub_ReleaseReadModifyWriteLock(a1, (unsigned int)(a2 - 1));
  result = XilRegister_ReadUlong(v19, v9);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v18) = 4;
    return WPP_RECORDER_SF_D(
             *(_QWORD *)(*v16 + 72LL),
             v18,
             11,
             238,
             (__int64)&WPP_ae3f3dc960bf3cde3d0f419b97453dd4_Traceguids,
             result);
  }
  return result;
}
