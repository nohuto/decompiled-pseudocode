/*
 * XREFs of SeCaptureObjectTypeList @ 0x1403AB7A0
 * Callers:
 *     SeAccessCheckByType @ 0x1403AC1E8 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A5E120 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadUShortFromUser @ 0x1407820CC (RtlReadUShortFromUser.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SeCaptureObjectTypeList(char *a1, unsigned int a2, char a3, _QWORD *a4)
{
  _QWORD *v4; // rax
  unsigned int v5; // edi
  char *v6; // r12
  unsigned int v7; // esi
  char *Pool2; // r15
  unsigned int i; // r13d
  char *v11; // rbx
  __int64 UShortFromUser; // r12
  void *ULong64FromUser; // rax
  __int64 v14; // rbx
  int v15; // eax
  _QWORD v19[4]; // [rsp+68h] [rbp-60h]

  v4 = a4;
  v5 = a2;
  v6 = a1;
  HIDWORD(v19[0]) = HIDWORD(a1);
  v7 = 0;
  Pool2 = 0LL;
  *a4 = 0LL;
  if ( a3 == 1 )
  {
    if ( !a2 )
    {
LABEL_3:
      *v4 = Pool2;
      return v7;
    }
    if ( a1 )
    {
      ProbeForRead(a1, 16LL * a2, 4u);
      Pool2 = (char *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        for ( i = 0; i < v5; ++i )
        {
          v11 = &v6[16 * i];
          UShortFromUser = (unsigned __int16)RtlReadUShortFromUser(v11);
          ULong64FromUser = (void *)RtlReadULong64FromUser(v11 + 8);
          v14 = 48LL * i;
          RtlCopyFromUser(&Pool2[v14 + 4], ULong64FromUser, 0x10uLL);
          if ( (unsigned __int16)UShortFromUser > 4u )
            goto LABEL_10;
          *(_WORD *)&Pool2[v14] = UShortFromUser;
          *(_WORD *)&Pool2[v14 + 2] = 0;
          *(_QWORD *)&Pool2[v14 + 24] = 0LL;
          *(_DWORD *)&Pool2[v14 + 32] = 0;
          *(_QWORD *)&Pool2[v14 + 40] = 0LL;
          if ( i )
          {
            if ( (unsigned int)UShortFromUser > (unsigned int)*(unsigned __int16 *)&Pool2[48 * i - 48] + 1
              || !(_WORD)UShortFromUser )
            {
              goto LABEL_10;
            }
            v15 = *((_DWORD *)v19 + (unsigned int)UShortFromUser + 1);
          }
          else
          {
            if ( (_WORD)UShortFromUser )
              goto LABEL_10;
            v15 = -1;
          }
          *(_DWORD *)&Pool2[v14 + 20] = v15;
          *((_DWORD *)&v19[1] + UShortFromUser) = i;
          v5 = a2;
          v6 = a1;
        }
        v4 = a4;
        goto LABEL_3;
      }
      v7 = -1073741670;
    }
    else
    {
LABEL_10:
      v7 = -1073741811;
    }
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    return v7;
  }
  return 3221225474LL;
}
