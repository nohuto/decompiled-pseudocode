/*
 * XREFs of AcpiPccReleaseSubspace @ 0x140064EC0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiPccUnlockSubspace @ 0x140040AA8 (AcpiPccUnlockSubspace.c)
 *     AcpiPccLockSubspace @ 0x14004B9A0 (AcpiPccLockSubspace.c)
 *     AcpiDiagTracePccReleaseSubspace @ 0x140056654 (AcpiDiagTracePccReleaseSubspace.c)
 *     AcpiPccLinkInterrupt @ 0x1400654F4 (AcpiPccLinkInterrupt.c)
 */

__int64 __fastcall AcpiPccReleaseSubspace(char *SynchronizeContext)
{
  unsigned int v2; // edi
  char *v3; // rsi
  unsigned int v4; // r8d
  char v5; // bp
  _QWORD *v6; // rcx
  char *v7; // rax
  __int64 v8; // rdx
  KIRQL v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0;
  v2 = -1073741823;
  v3 = 0LL;
  AcpiPccLockSubspace((__int64)SynchronizeContext, &v10);
  v4 = *((_DWORD *)SynchronizeContext + 2);
  v5 = (v4 >> 1) & 0xF;
  if ( v5 == 5 )
  {
    v6 = SynchronizeContext + 360;
    v7 = (char *)*((_QWORD *)SynchronizeContext + 45);
    if ( v7 == SynchronizeContext + 360 )
    {
      if ( *((_DWORD *)SynchronizeContext + 4) == 2 )
      {
        if ( (unsigned int)AcpiPccLinkInterrupt(SynchronizeContext) != 1 )
        {
          v4 = *((_DWORD *)SynchronizeContext + 2) & 0xFFFFFFE1 | 2;
LABEL_13:
          *((_DWORD *)SynchronizeContext + 2) = v4;
          goto LABEL_14;
        }
        KeSynchronizeExecution(
          *((PKINTERRUPT *)SynchronizeContext + 26),
          AcpiPccRingDoorbellCriticalSection,
          SynchronizeContext);
        v4 = *((_DWORD *)SynchronizeContext + 2) & 0xFFFFFFE1 | 0x10;
      }
      else
      {
        v4 = v4 & 0xFFFFFFE1 | 6;
      }
    }
    else
    {
      if ( *((_QWORD **)v7 + 1) != v6 || (v8 = *(_QWORD *)v7, *(char **)(*(_QWORD *)v7 + 8LL) != v7) )
        __fastfail(3u);
      *v6 = v8;
      v3 = v7;
      *(_QWORD *)(v8 + 8) = v6;
      v4 = *((_DWORD *)SynchronizeContext + 2) & 0xFFFFFFE1 | 0xA;
    }
    v2 = 0;
    goto LABEL_13;
  }
LABEL_14:
  AcpiDiagTracePccReleaseSubspace(*((_DWORD *)SynchronizeContext + 1), v5, (v4 >> 1) & 0xF, v2);
  AcpiPccUnlockSubspace((__int64)SynchronizeContext, v10);
  if ( v3 )
  {
    *((_DWORD *)v3 + 10) = 0;
    KeSetEvent((PRKEVENT)(v3 + 16), 0, 0);
  }
  return v2;
}
