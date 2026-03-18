/*
 * XREFs of ?bFontFile@UMPDOBJ@@QEAA_NAEAVRFONTOBJ@@@Z @ 0x140292838
 * Callers:
 *     NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x14024E7C0 (NtGdiFONTOBJ_pvTrueTypeFontFile.c)
 * Callees:
 *     ??1MapViewOfSectionObj@Gre@@QEAA@XZ @ 0x14020AFBC (--1MapViewOfSectionObj@Gre@@QEAA@XZ.c)
 *     ?Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z @ 0x14021164C (-Map@MapViewOfSectionObj@Gre@@QEAA_NPEAXW4MapKind@12@_K@Z.c)
 *     ?GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z @ 0x1402200D4 (-GetTrueTypeFile@PFFOBJ@@QEAAPEAX_KPEAK@Z.c)
 *     ?bSectionFromPch@RFONTOBJ@@QEAA_NPEBDPEAPEAXPEA_K2@Z @ 0x140327DDC (-bSectionFromPch@RFONTOBJ@@QEAA_NPEBDPEAPEAXPEA_K2@Z.c)
 */

char __fastcall UMPDOBJ::bFontFile(UMPDOBJ *this, struct RFONTOBJ *a2)
{
  char v2; // bl
  unsigned __int64 v5; // r8
  __int64 v6; // rdx
  const char *TrueTypeFile; // rax
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned __int64 v14[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15; // [rsp+40h] [rbp-30h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h]
  __int64 v17; // [rsp+50h] [rbp-20h]
  __int64 v18; // [rsp+58h] [rbp-18h]
  int v19; // [rsp+60h] [rbp-10h]
  unsigned int v20; // [rsp+98h] [rbp+28h] BYREF
  unsigned __int64 v21; // [rsp+A0h] [rbp+30h] BYREF
  void *v22; // [rsp+A8h] [rbp+38h] BYREF

  v2 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)a2 + 128LL);
  if ( !v5 )
    return 0;
  v6 = *(_QWORD *)(v5 + 88);
  if ( !v6 )
    return 0;
  v14[0] = v5;
  v20 = 0;
  TrueTypeFile = (const char *)PFFOBJ::GetTrueTypeFile((PFFOBJ *)v14, v6, &v20);
  if ( !TrueTypeFile )
    return 0;
  v22 = 0LL;
  v14[0] = 0LL;
  v21 = 0LL;
  if ( !RFONTOBJ::bSectionFromPch(a2, TrueTypeFile, &v22, v14, &v21) )
    return 0;
  v16 = 0LL;
  v15 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 6;
  if ( (unsigned __int8)Gre::MapViewOfSectionObj::Map((__int64)&v15, (__int64)v22, 0LL, v21) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    v10 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    *((_QWORD *)this + 47) = v10;
    ObfReferenceObject(*(PVOID *)v10);
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v11 = v17;
    v12 = v20;
    *((_QWORD *)this + 44) = v17;
    v17 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    v18 = 0LL;
    v2 = 1;
    *((_QWORD *)this + 45) = v14[0] + v11;
    *((_DWORD *)this + 93) = v12;
    v19 = 6;
  }
  Gre::MapViewOfSectionObj::~MapViewOfSectionObj((Gre::MapViewOfSectionObj *)&v15);
  return v2;
}
