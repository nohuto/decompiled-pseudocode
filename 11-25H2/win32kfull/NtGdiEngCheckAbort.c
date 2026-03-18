/*
 * XREFs of NtGdiEngCheckAbort @ 0x1401F8490
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140079978 (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1400D64F4 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?Cleanup@UMPDSURFOBJ@@SAXPEAX@Z @ 0x1400D6D20 (-Cleanup@UMPDSURFOBJ@@SAXPEAX@Z.c)
 *     EngCheckAbort @ 0x1401F8530 (EngCheckAbort.c)
 */

__int64 __fastcall NtGdiEngCheckAbort(struct _SURFOBJ *a1, __int64 a2)
{
  struct _GRETHREAD *CurrentThread; // rax
  __int64 v4; // r9
  unsigned int v5; // ebx
  SURFOBJ *pso[3]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v8[40]; // [rsp+38h] [rbp-A0h] BYREF
  struct W32_PUSH_LOCK *v9[4]; // [rsp+60h] [rbp-78h] BYREF
  struct UMPDOBJ *v10; // [rsp+80h] [rbp-58h]

  CurrentThread = GreGetCurrentThread((__int64)a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v9, CurrentThread);
  if ( v10 )
  {
    UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)v10, v4);
    if ( pso[0] )
      v5 = EngCheckAbort(pso[0]);
    else
      v5 = 1;
    CAutoTGO::vUnguard((CAutoTGO *)v8);
    UMPDSURFOBJ::Cleanup(pso);
    CAutoTGO::vUnguard((CAutoTGO *)v8);
  }
  else
  {
    v5 = 1;
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v9);
  return v5;
}
