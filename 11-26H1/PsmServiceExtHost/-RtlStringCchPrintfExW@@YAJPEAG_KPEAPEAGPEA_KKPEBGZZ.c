/*
 * XREFs of ?RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x180063FF0
 * Callers:
 *     ?HampSlsBlockerEntryUpdateBlockType@@YAJPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK_TYPE@@PEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180063BB8 (-HampSlsBlockerEntryUpdateBlockType@@YAJPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK.c)
 *     ?HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@@Z @ 0x180063DEC (-HampSlsBlockerEntryCreate@@YAJPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAPEAU_.c)
 * Callees:
 *     RtlStringExHandleOtherFlagsW @ 0x18007F63C (RtlStringExHandleOtherFlagsW.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 RtlStringCchPrintfExW(
        wchar_t *Buffer,
        unsigned __int64 a2,
        unsigned __int16 **a3,
        unsigned __int64 *a4,
        unsigned int a5,
        const unsigned __int16 *a6,
        ...)
{
  int v8; // ebx
  const wchar_t *v9; // r8
  wchar_t *v10; // r13
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rsi
  int v13; // eax
  wchar_t *v15; // [rsp+30h] [rbp-18h] BYREF
  unsigned __int64 v16; // [rsp+38h] [rbp-10h] BYREF
  unsigned __int64 *v18; // [rsp+A8h] [rbp+60h]
  va_list Args; // [rsp+C0h] [rbp+78h] BYREF

  va_start(Args, a6);
  v18 = a4;
  v8 = 0;
  if ( (a5 & 0x100) != 0 )
  {
    if ( !Buffer && a2 || a2 > 0x7FFFFFFF )
      v8 = -1073741811;
  }
  else if ( a2 - 1 > 0x7FFFFFFE )
  {
    v8 = -1073741811;
  }
  if ( v8 < 0 )
  {
    if ( a2 )
      *Buffer = 0;
    return (unsigned int)v8;
  }
  v9 = a6;
  v10 = Buffer;
  v15 = Buffer;
  v11 = a2;
  v16 = a2;
  if ( (a5 & 0x100) != 0 && !a6 )
    v9 = &word_1800BBB1C;
  v8 = 0;
  if ( (a5 & 0xFFFFE000) != 0 )
  {
    v8 = -1073741811;
    if ( a2 )
      *Buffer = 0;
    goto LABEL_15;
  }
  if ( a2 )
  {
    v16 = 0LL;
    v12 = a2 - 1;
    v13 = _vsnwprintf(Buffer, a2 - 1, v9, Args);
    if ( v13 < 0 || v13 > v12 )
    {
      v8 = -2147483643;
    }
    else if ( v13 != v12 )
    {
      v12 = v13;
      goto LABEL_33;
    }
    Buffer[v12] = 0;
LABEL_33:
    v11 = a2 - v12;
    v10 = &Buffer[v12];
    v15 = v10;
    v16 = a2 - v12;
    if ( v8 >= 0 )
    {
      if ( (a5 & 0x200) != 0 && v11 > 1 && 2 * v11 > 2 )
        memset_0(v10 + 1, (unsigned __int8)a5, 2 * v11 - 2);
      goto LABEL_19;
    }
    goto LABEL_15;
  }
  if ( !*v9 )
    goto LABEL_20;
  v8 = Buffer != 0LL ? -2147483643 : -1073741811;
LABEL_15:
  if ( (a5 & 0x1C00) != 0 && a2 )
  {
    RtlStringExHandleOtherFlagsW(Buffer, 2 * a2, v9, &v15, &v16, a5);
    v10 = v15;
    v11 = v16;
  }
  if ( v8 == -2147483643 )
  {
LABEL_19:
    a4 = v18;
LABEL_20:
    if ( a3 )
      *a3 = v10;
    if ( a4 )
      *a4 = v11;
  }
  return (unsigned int)v8;
}
