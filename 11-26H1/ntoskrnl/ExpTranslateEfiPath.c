/*
 * XREFs of ExpTranslateEfiPath @ 0x140A9512C
 * Callers:
 *     NtTranslateFilePath @ 0x140A94C80 (NtTranslateFilePath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     swprintf_s @ 0x14053B0E0 (swprintf_s.c)
 *     wcscpy_s @ 0x14053CB00 (wcscpy_s.c)
 *     wcsncat_s @ 0x14053CB90 (wcsncat_s.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ExpCreateOutputARC @ 0x14083B318 (ExpCreateOutputARC.c)
 *     ExpCreateOutputSIGNATURE @ 0x14083B414 (ExpCreateOutputSIGNATURE.c)
 *     ExpGetDriveGeometry @ 0x14083B8C8 (ExpGetDriveGeometry.c)
 *     RtlStringFromGUIDEx @ 0x140A3EB50 (RtlStringFromGUIDEx.c)
 *     ExpParseEfiPath @ 0x140A953B8 (ExpParseEfiPath.c)
 *     ExpTranslateSymbolicLink @ 0x140A95510 (ExpTranslateSymbolicLink.c)
 *     ExpCreateOutputNT @ 0x140A956C0 (ExpCreateOutputNT.c)
 *     ExpFindDiskSignature @ 0x140A9578C (ExpFindDiskSignature.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpTranslateEfiPath(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _DWORD *v6; // rdi
  unsigned int v7; // r14d
  char v8; // r13
  int OutputARC; // eax
  int DiskSignature; // ebx
  int v11; // esi
  unsigned int v12; // r15d
  unsigned __int64 v13; // rbx
  int DriveGeometry; // eax
  unsigned int v15; // ecx
  wchar_t *Pool2; // rax
  WCHAR *v17; // rbx
  int v18; // esi
  __int64 v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-79h]
  PVOID P; // [rsp+50h] [rbp-49h] BYREF
  unsigned int v22; // [rsp+58h] [rbp-41h] BYREF
  __int64 v23; // [rsp+60h] [rbp-39h] BYREF
  __int64 v24; // [rsp+68h] [rbp-31h] BYREF
  int v25[2]; // [rsp+70h] [rbp-29h]
  int v26[2]; // [rsp+78h] [rbp-21h]
  wchar_t *Src[2]; // [rsp+80h] [rbp-19h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-9h] BYREF
  __int128 v29; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v30; // [rsp+B0h] [rbp+17h]

  *(_QWORD *)v25 = a4;
  *(_QWORD *)v26 = a3;
  P = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v30 = 0LL;
  *(_OWORD *)Src = 0LL;
  DestinationString = 0LL;
  v29 = 0LL;
  result = ExpParseEfiPath((void *)(a1 + 12));
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v6 = P;
    v7 = 1;
    v22 = 0;
    v8 = 0;
    LODWORD(P) = *((_DWORD *)P + 1);
    DiskSignature = ExpFindDiskSignature(
                      (int)v6 + 24,
                      (unsigned int)&P,
                      (unsigned int)&v22,
                      (unsigned int)&v23,
                      (__int64)&v24,
                      0);
    if ( DiskSignature < 0 )
      goto LABEL_7;
    v11 = (int)P;
    if ( v6[1] == (_DWORD)P )
    {
      v12 = v22;
      v13 = v24;
      if ( *((_QWORD *)v6 + 1) == v23 && *((_QWORD *)v6 + 2) == v24 )
      {
LABEL_24:
        Pool2 = (wchar_t *)ExAllocatePool2(0x40uLL);
        v17 = Pool2;
        if ( !Pool2 )
        {
          DiskSignature = -1073741670;
          goto LABEL_7;
        }
        LODWORD(v20) = v11;
        swprintf_s(Pool2, 0x2FuLL, L"\\Device\\Harddisk%lu\\Partition%lu", v12);
        v18 = ExpTranslateSymbolicLink(v17);
        ExFreePoolWithTag(v17, 0);
        if ( v18 < 0 )
        {
          DiskSignature = v18;
          goto LABEL_7;
        }
        if ( a2 == 3 )
        {
          OutputARC = ExpCreateOutputNT(*(_QWORD *)v26, *(_QWORD *)v25, &DestinationString, 0LL, v20);
        }
        else if ( a2 == 2 )
        {
          if ( v8 == 1 )
          {
            DiskSignature = ExpGetDriveGeometry(v12, &v29);
            if ( DiskSignature < 0 )
              goto LABEL_6;
            v7 = HIDWORD(v30);
          }
          LODWORD(P) = v6[1];
          v19 = *((_QWORD *)v6 + 2) * v7;
          v23 = *((_QWORD *)v6 + 1) * v7;
          v24 = v19;
          OutputARC = ExpCreateOutputSIGNATURE(
                        *(__int64 *)v26,
                        *(unsigned int **)v25,
                        v6 + 6,
                        (unsigned int *)&P,
                        &v23,
                        &v24,
                        0LL,
                        0);
        }
        else
        {
          OutputARC = ExpCreateOutputARC(*(_DWORD **)v26, *(unsigned int **)v25, (__int64)&DestinationString, 0LL);
        }
        DiskSignature = OutputARC;
LABEL_6:
        ExFreePoolWithTag(DestinationString.Buffer, 0);
LABEL_7:
        ExFreePoolWithTag(v6, 0);
        return (unsigned int)DiskSignature;
      }
      DriveGeometry = ExpGetDriveGeometry(v22, &v29);
      v15 = HIDWORD(v30);
      if ( DriveGeometry < 0 )
        v15 = 1;
      HIDWORD(v30) = v15;
      if ( *((_QWORD *)v6 + 1) == v23 / (unsigned __int64)v15 && *((_QWORD *)v6 + 2) == v13 / v15 )
      {
        v8 = 1;
        goto LABEL_24;
      }
    }
    DiskSignature = -1073741811;
    goto LABEL_7;
  }
  return result;
}
