/*
 * XREFs of GreCreateCompatibleDC @ 0x14003AF40
 * Callers:
 *     NtGdiCreateCompatibleDC @ 0x14003AF20 (NtGdiCreateCompatibleDC.c)
 *     InitUserScreen @ 0x1401D1E4C (InitUserScreen.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x140019EE0 (PopThreadGuardedObject.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x14003BEB4 (--1DCOBJ@@QEAA@XZ.c)
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x14003F770 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ @ 0x14003FF44 (--0-$UnexpectedThreadTerminationHandler@VDCOBJ@@@@QEAA@XZ.c)
 */

HDC __fastcall GreCreateCompatibleDC(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  char *v5; // rax
  __int64 v6; // rcx
  HDC CompatibleDC; // rbx
  __int64 v9; // [rsp+20h] [rbp-19h] BYREF
  int v10; // [rsp+28h] [rbp-11h]
  __int64 v11; // [rsp+30h] [rbp-9h]
  __int64 v12; // [rsp+38h] [rbp-1h]
  char v13[32]; // [rsp+40h] [rbp+7h] BYREF
  __int128 v14; // [rsp+60h] [rbp+27h] BYREF
  __int128 v15; // [rsp+70h] [rbp+37h]
  __int64 v16; // [rsp+80h] [rbp+47h]
  __int16 v17; // [rsp+88h] [rbp+4Fh]

  v11 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v12 = 0LL;
  v9 = 0LL;
  v10 = 0;
  UnexpectedThreadTerminationHandler<DCOBJ>::UnexpectedThreadTerminationHandler<DCOBJ>(v13);
  v14 = 0LL;
  v15 = 0LL;
  CurrentThread = GreGetCurrentThread(v3, v2);
  *(_QWORD *)&v15 = &v9;
  *((_QWORD *)&v15 + 1) = UnexpectedThreadTerminationHandler<OPTAPIDCOBJ>::OnUnexpectedThreadTerminationStatic;
  if ( CurrentThread )
  {
    v5 = (char *)CurrentThread + 88;
    v6 = *(_QWORD *)v5;
    if ( *(char **)(*(_QWORD *)v5 + 8LL) != v5 )
      __fastfail(3u);
    *(_QWORD *)&v14 = *(_QWORD *)v5;
    *((_QWORD *)&v14 + 1) = v5;
    *(_QWORD *)(v6 + 8) = &v14;
    *(_QWORD *)v5 = &v14;
  }
  else
  {
    *((_QWORD *)&v14 + 1) = &v14;
    *(_QWORD *)&v14 = &v14;
  }
  v16 = a1;
  v17 = 1;
  CompatibleDC = GrepCreateCompatibleDC((struct OPTAPIDCOBJ *)&v9);
  v9 &= -(__int64)((_BYTE)v17 != 0);
  PopThreadGuardedObject(&v14);
  DCOBJ::~DCOBJ((DCOBJ *)&v9);
  return CompatibleDC;
}
