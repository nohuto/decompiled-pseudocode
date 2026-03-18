/*
 * XREFs of NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1400D5310
 * Callers:
 *     <none>
 * Callees:
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ??$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z @ 0x1400D1B14 (--$GetDDIOBJ@U_FONTOBJ@@@UMPDOBJ@@QEAAPEAU_FONTOBJ@@PEAU1@@Z.c)
 *     ??0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z @ 0x1400D3B24 (--0UMPDENGCALL@UMPDOBJ@@QEAA@PEAU_GRETHREAD@@@Z.c)
 *     ??1UMPDENGCALL@UMPDOBJ@@QEAA@XZ @ 0x1400D3F84 (--1UMPDENGCALL@UMPDOBJ@@QEAA@XZ.c)
 *     ?pvFontFile@UMPDOBJ@@QEAAXPEAX0K@Z @ 0x1400D5B7C (-pvFontFile@UMPDOBJ@@QEAAXPEAX0K@Z.c)
 *     ?FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z @ 0x1400D5C30 (-FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

void *__fastcall NtGdiFONTOBJ_pvTrueTypeFontFile(__int64 a1, __int64 a2)
{
  void *v2; // rsi
  struct _GRETHREAD *CurrentThread; // rax
  UMPDOBJ *v5; // rdi
  void *v6; // rbx
  struct _FONTOBJ *v7; // rcx
  void *v8; // rax
  struct W32_PUSH_LOCK *v10[4]; // [rsp+20h] [rbp-88h] BYREF
  UMPDOBJ *v11; // [rsp+40h] [rbp-68h]
  unsigned int Src; // [rsp+C0h] [rbp+18h] BYREF
  void *v13; // [rsp+C8h] [rbp+20h] BYREF

  v2 = (void *)a2;
  CurrentThread = GreGetCurrentThread(a1, a2);
  UMPDOBJ::UMPDENGCALL::UMPDENGCALL((UMPDOBJ::UMPDENGCALL *)v10, CurrentThread);
  v5 = v11;
  if ( !v11 )
  {
    UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v10);
    return 0LL;
  }
  v13 = 0LL;
  v6 = 0LL;
  Src = 0;
  v7 = (struct _FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)v11, a1);
  if ( !v7 )
    goto LABEL_6;
  Src = *((_DWORD *)v5 + 97);
  v6 = (void *)*((_QWORD *)v5 + 47);
  if ( !v6 )
  {
    v8 = FONTOBJ_pvTrueTypeFontFileUMPD(v7, &Src, &v13);
    v6 = v8;
    if ( v8 )
      UMPDOBJ::pvFontFile(v5, v8, v13, Src);
LABEL_6:
    if ( !v6 )
      Src = 0;
  }
  if ( v2 )
  {
    if ( (unsigned __int64)v2 >= MmUserProbeAddress )
      v2 = (void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(v2, &Src, 4uLL);
  }
  UMPDOBJ::UMPDENGCALL::~UMPDENGCALL(v10);
  return v6;
}
