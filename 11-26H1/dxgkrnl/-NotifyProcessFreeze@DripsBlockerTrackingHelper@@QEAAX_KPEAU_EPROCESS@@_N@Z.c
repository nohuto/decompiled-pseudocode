/*
 * XREFs of ?NotifyProcessFreeze@DripsBlockerTrackingHelper@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1403B6614
 * Callers:
 *     ?NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z @ 0x1403B6590 (-NotifyProcessFreezeCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

void __fastcall DripsBlockerTrackingHelper::NotifyProcessFreeze(
        DripsBlockerTrackingHelper *this,
        __int64 a2,
        struct _EPROCESS *a3,
        char a4)
{
  const char *ProcessImageFileName; // rcx
  __int64 v8; // r8
  _BYTE *v9; // rdx
  signed __int64 v10; // rcx
  char v11; // al
  _BYTE *v12; // rax
  __int64 v13; // rcx
  _BYTE *v14; // rax
  SIZE_T v15; // rbp
  unsigned int i; // esi
  __int64 v17; // rbx
  int v18; // eax
  int v19; // eax
  _OWORD Source2[2]; // [rsp+20h] [rbp-58h] BYREF
  char v21; // [rsp+40h] [rbp-38h]

  if ( *((_BYTE *)this + 302080) )
  {
    v21 = 0;
    memset(Source2, 0, sizeof(Source2));
    if ( a3 )
    {
      ProcessImageFileName = (const char *)PsGetProcessImageFileName(a3);
      if ( !ProcessImageFileName )
        ProcessImageFileName = File;
    }
    else
    {
      ProcessImageFileName = "ExternalActivation";
    }
    v8 = 33LL;
    v9 = Source2;
    v10 = ProcessImageFileName - (const char *)Source2;
    do
    {
      if ( v8 == -2147483613 )
        break;
      v11 = v9[v10];
      if ( !v11 )
        break;
      *v9++ = v11;
      --v8;
    }
    while ( v8 );
    v12 = v9 - 1;
    if ( v8 )
      v12 = v9;
    *v12 = 0;
    if ( v8 )
    {
      v13 = 33LL;
      v14 = Source2;
      do
      {
        if ( !*v14 )
          break;
        ++v14;
        --v13;
      }
      while ( v13 );
      v15 = (33 - v13) & -(__int64)(v13 != 0);
      if ( v13 )
      {
        if ( v15 )
        {
          for ( i = 0; ; ++i )
          {
            if ( i >= 0x40 )
              return;
            v17 = 4720LL * i;
            if ( *((_BYTE *)this + v17 + 104) )
            {
              if ( *(_QWORD *)((char *)this + v17) == a2
                && RtlCompareMemory((char *)this + v17 + 8, Source2, v15) == v15 )
              {
                break;
              }
            }
          }
          v18 = *(_DWORD *)((char *)this + v17 + 108);
          if ( !a4 )
          {
            v19 = v18 + 1;
LABEL_25:
            *(_DWORD *)((char *)this + v17 + 108) = v19;
            return;
          }
          if ( v18 > 0 )
          {
            v19 = v18 - 1;
            goto LABEL_25;
          }
        }
      }
      else
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 856;
      }
    }
  }
}
