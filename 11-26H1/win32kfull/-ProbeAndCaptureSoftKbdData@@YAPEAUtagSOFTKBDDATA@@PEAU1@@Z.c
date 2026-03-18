/*
 * XREFs of ?ProbeAndCaptureSoftKbdData@@YAPEAUtagSOFTKBDDATA@@PEAU1@@Z @ 0x1402A0F5C
 * Callers:
 *     NtUserfnIMECONTROL @ 0x1401F6D70 (NtUserfnIMECONTROL.c)
 * Callees:
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

struct tagSOFTKBDDATA *__fastcall ProbeAndCaptureSoftKbdData(struct tagSOFTKBDDATA *a1)
{
  unsigned int ULongFromUser; // esi
  SIZE_T v2; // rbx
  unsigned int v4; // edi
  unsigned int *v5; // rax
  unsigned int *v6; // rbx

  ULongFromUser = RtlReadULongFromUser(a1);
  v2 = (unsigned __int64)ULongFromUser << 9;
  ProbeForRead((char *)a1 + 4, v2, 2u);
  if ( v2 > 0xFFFFFFFF )
    return 0LL;
  if ( (int)v2 + 4 < (unsigned int)v2 )
    return 0LL;
  v4 = v2 + 4;
  v5 = (unsigned int *)Win32AllocPoolZInit((unsigned int)(v2 + 4), 1835627349LL);
  v6 = v5;
  if ( !v5 )
    ExRaiseStatus(-1073741801);
  memmove(v5, a1, v4);
  *v6 = ULongFromUser;
  return (struct tagSOFTKBDDATA *)v6;
}
