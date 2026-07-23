/*
 * XREFs of KeVerifyContextXStateCetU @ 0x1403D9C14
 * Callers:
 *     KyRaiseException @ 0x1403D6E5C (KyRaiseException.c)
 *     KiContinuePreviousModeUser @ 0x1403D8A40 (KiContinuePreviousModeUser.c)
 *     PspGetSetContextInternal @ 0x140A4CA50 (PspGetSetContextInternal.c)
 * Callees:
 *     RtlLocateExtendedFeature2 @ 0x1403DA020 (RtlLocateExtendedFeature2.c)
 *     KiVerifyContextXStateCetUEnabled @ 0x1403DA154 (KiVerifyContextXStateCetUEnabled.c)
 */

__int64 __fastcall KeVerifyContextXStateCetU(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned int v7; // ebx
  _QWORD *ExtendedFeature2; // r8
  __int64 v9; // r10
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  int v12; // eax

  if ( (*(_DWORD *)(a2 + 48) & 0x100040) != 0x100040 )
    return 0LL;
  v7 = 0;
  ExtendedFeature2 = (_QWORD *)RtlLocateExtendedFeature2(a2 + 1232, 11LL, 0xFFFFF780000003D8uLL);
  if ( !ExtendedFeature2 )
    return 0LL;
  v9 = *(int *)(a2 + 1248);
  v10 = __readmsr(0x6A7u);
  if ( KiUserCetPl3SspCanonicalizeMask )
    v10 &= KiUserCetPl3SspCanonicalizeMask;
  *a3 = v10;
  v11 = *(_QWORD *)(v9 + a2 + 1232) & 0x800LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x100000) == 0 )
  {
    if ( v11 )
    {
      if ( *ExtendedFeature2 )
        return 3221227018LL;
      else
        return ExtendedFeature2[1] != 0LL ? 0xC000060A : 0;
    }
    return 0LL;
  }
  if ( !v11 )
  {
    *(_QWORD *)(v9 + a2 + 1232) |= 0x800uLL;
    *ExtendedFeature2 = 1LL;
    ExtendedFeature2[1] = v10;
    return 0LL;
  }
  v12 = KiVerifyContextXStateCetUEnabled(ExtendedFeature2, v10);
  if ( v12 < 0 )
    return (unsigned int)v12;
  return v7;
}
