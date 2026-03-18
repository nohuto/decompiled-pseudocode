/*
 * XREFs of PopSessionConnectionChangeV2 @ 0x1407DDEB4
 * Callers:
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 * Callees:
 *     PopPrintEx @ 0x1404C33A8 (PopPrintEx.c)
 *     PopSessionConnectedV2 @ 0x1407DDDF4 (PopSessionConnectedV2.c)
 *     PopAcquireAdaptiveLock @ 0x140A3AFDC (PopAcquireAdaptiveLock.c)
 *     PopSessionDisconnected @ 0x140A3B980 (PopSessionDisconnected.c)
 *     PopReleaseAdaptiveLock @ 0x140A3D6E4 (PopReleaseAdaptiveLock.c)
 */

__int64 __fastcall PopSessionConnectionChangeV2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // di
  unsigned int v5; // esi
  int v6; // ebx
  const char *v10; // rax
  const char *v11; // r8

  v4 = *(_BYTE *)a2;
  v5 = a1;
  v6 = *(_DWORD *)(a2 + 4);
  LOBYTE(a1) = 1;
  PopAcquireAdaptiveLock(a1);
  v10 = "Connected";
  if ( !v4 )
    v10 = "Disconnected";
  v11 = "Console";
  if ( v6 )
    v11 = "Remote";
  PopPrintEx(3, (int)"PopAdaptive:>>>>>%s session %u is %s\n", v11, v5, v10);
  if ( v4 )
    PopSessionConnectedV2(v5, a2, a3, a4);
  else
    PopSessionDisconnected(v5, a4);
  return PopReleaseAdaptiveLock();
}
