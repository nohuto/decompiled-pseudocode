/*
 * XREFs of ?HampSlsBlockerEntryUpdateBlockType@@YAJPEAU_HAM_SLEEP_STUDY_PDC_BLOCKER_ENTRY@@W4_HAM_PDC_BLOCK_TYPE@@PEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180063BB8
 * Callers:
 *     ?HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_PDC_BLOCK_TYPE@@@Z @ 0x18003E494 (-HampSlsUpdateHostBlockType@@YAXPEAU_HAM_SLEEP_STUDY_CONTEXT@@PEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_.c)
 * Callees:
 *     ?RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x180063FF0 (-RtlStringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     ?HampSlsCreateGuid@@YAJPEAU_GUID@@@Z @ 0x1800641C0 (-HampSlsCreateGuid@@YAJPEAU_GUID@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

__int64 __fastcall HampSlsBlockerEntryUpdateBlockType(__int64 a1, unsigned __int8 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v11; // rcx
  __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v13; // [rsp+48h] [rbp-B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 *v15; // [rsp+60h] [rbp-A0h] BYREF
  struct _GUID v16; // [rsp+70h] [rbp-90h] BYREF
  struct _GUID v17; // [rsp+80h] [rbp-80h] BYREF
  wchar_t Source[256]; // [rsp+90h] [rbp-70h] BYREF
  int v19; // [rsp+290h] [rbp+190h]

  v5 = a2;
  v17 = 0LL;
  memset_0(Source, 0, 0x204uLL);
  v8 = *(unsigned __int8 *)(a1 + 32);
  v12 = 0LL;
  v13 = 0LL;
  DestinationString = 0LL;
  v16 = 0LL;
  if ( (_BYTE)v8 != 5 )
  {
    v12 = *(_QWORD *)(a1 + 8 * v8 + 64);
    if ( (_BYTE)v8 )
      SleepstudyHelperBlockerActiveDereference();
  }
  if ( !(_BYTE)v5 )
    goto LABEL_5;
  v12 = *(_QWORD *)(a1 + 8 * v5 + 64);
  if ( v12 )
  {
LABEL_4:
    SleepstudyHelperBlockerActiveReference();
LABEL_5:
    v9 = 0;
    *(_BYTE *)(a1 + 32) = v5;
    goto LABEL_6;
  }
  RtlStringCchPrintfExW(Source, 0x100uLL, &v15, 0LL, 0, L"%s (%u)", a4 + 24, v5);
  v19 = wcsnlen(Source, 0x100uLL) + 1;
  RtlInitUnicodeString(&DestinationString, Source);
  if ( (unsigned int)HampSlsCreateGuid(&v16) )
  {
    v9 = -1073741823;
  }
  else
  {
    v11 = *(_QWORD *)(a3 + 8);
    v17 = v16;
    v9 = SleepstudyHelperCreateBlockerFromGuid(v11, a1 + 40, &v17, &DestinationString, 3, &v13);
    if ( v9 >= 0 )
    {
      v9 = SleepstudyHelperSetBlockerParentHandle(v13, *(_QWORD *)(a1 + 56));
      if ( v9 >= 0 )
      {
        v9 = SleepstudyHelperBuildBlocker(v13, &v12);
        if ( v9 >= 0 )
        {
          v13 = 0LL;
          *(_QWORD *)(a1 + 8 * v5 + 64) = v12;
          goto LABEL_4;
        }
      }
    }
  }
LABEL_6:
  if ( v13 )
    SleepstudyHelperDestroyBlockerBuilder();
  return (unsigned int)v9;
}
