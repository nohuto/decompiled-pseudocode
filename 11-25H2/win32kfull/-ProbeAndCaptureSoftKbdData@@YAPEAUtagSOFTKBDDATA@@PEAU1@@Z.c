/*
 * XREFs of ?ProbeAndCaptureSoftKbdData@@YAPEAUtagSOFTKBDDATA@@PEAU1@@Z @ 0x1402823DC
 * Callers:
 *     NtUserfnIMECONTROL @ 0x14002AF60 (NtUserfnIMECONTROL.c)
 * Callees:
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

struct tagSOFTKBDDATA *__fastcall ProbeAndCaptureSoftKbdData(struct tagSOFTKBDDATA *a1)
{
  struct tagSOFTKBDDATA *v1; // rdx
  SIZE_T v2; // rbx
  unsigned int v4; // eax
  unsigned int v5; // ebx
  _DWORD *v6; // [rsp+30h] [rbp-18h]
  int v8; // [rsp+58h] [rbp+10h]

  v1 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v1 = (struct tagSOFTKBDDATA *)MmUserProbeAddress;
  v8 = *(_DWORD *)v1;
  v2 = (unsigned __int64)*(unsigned int *)v1 << 9;
  ProbeForRead((char *)a1 + 4, v2, 2u);
  if ( v2 > 0xFFFFFFFF )
    return 0LL;
  v4 = v2 + 4;
  if ( (int)v2 + 4 < (unsigned int)v2 )
    return 0LL;
  v5 = v2 + 4;
  v6 = (_DWORD *)Win32AllocPoolZInit(v4, 1835627349LL);
  if ( !v6 )
    ExRaiseStatus(-1073741801);
  memmove(v6, a1, v5);
  *v6 = v8;
  return (struct tagSOFTKBDDATA *)v6;
}
