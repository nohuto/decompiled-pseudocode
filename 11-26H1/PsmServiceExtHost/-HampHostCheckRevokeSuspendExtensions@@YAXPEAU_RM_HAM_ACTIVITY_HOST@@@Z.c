/*
 * XREFs of ?HampHostCheckRevokeSuspendExtensions@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000B9B0
 * Callers:
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AC00 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003F9C0 (-HampHostGetFirstActivity@@YAPEAU_HAM_ACTIVITY@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@KW4_HAM_TERMINATE_REASON@@KPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004394C (-HampActRequestStopEx@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_ACTIVITY_STOP_REQUEST_TYPE@@W4_HAM_ACTIVITY_.c)
 */

void __fastcall HampHostCheckRevokeSuspendExtensions(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rax
  char *v3; // rax
  char *v4; // rcx
  BOOL v5; // edx
  char *v6; // rcx
  char *v7; // rax
  char v8; // cl
  __int64 v9; // rdx
  struct _HAM_ACTIVITY *FirstActivity; // rdi
  char v11; // al
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8

  v1 = *((_QWORD *)a1 + 83);
  if ( (v1 & 0x4000000000LL) == 0 && ((v1 & 0x30000) == 0 || (v1 & 0x8000000000LL) != 0) )
  {
    v3 = (char *)a1 + 608;
    v4 = (char *)*((_QWORD *)a1 + 76);
    v5 = v4 != v3;
    v6 = v4 - 96;
    v7 = 0LL;
    if ( v5 )
      v7 = v6;
    while ( v7 )
    {
      if ( (v7[552] & 0x48) == 0 )
      {
        v8 = v7[562];
        if ( (v8 == 3 || v8 == 2 && (unsigned __int8)v7[563] >= 3u) && (*((_DWORD *)v7 + 28) & 0x400) != 0 )
        {
          FirstActivity = HampHostGetFirstActivity(a1);
          if ( FirstActivity )
          {
            do
            {
              v11 = *((_BYTE *)FirstActivity + 562);
              if ( (v11 == 3 || v11 == 2)
                && (*((_DWORD *)FirstActivity + 30) & 0x100) != 0
                && (*((_DWORD *)FirstActivity + 138) & 0x300u) < 0x300 )
              {
                v13 = *((_QWORD *)a1 + 83);
                v14 = 5LL;
                if ( (v13 & 0x30000) == 0 )
                  v14 = 2LL;
                HampActRequestStopEx(FirstActivity, 3LL, v14, 0LL, (unsigned __int16)v13, 32, 0LL);
              }
              v12 = *((_QWORD *)FirstActivity + 12);
              if ( v12 == *((_QWORD *)FirstActivity + 10) + 608LL )
                break;
              FirstActivity = (struct _HAM_ACTIVITY *)(v12 - 96);
            }
            while ( v12 != 96 );
          }
          return;
        }
      }
      v9 = *((_QWORD *)v7 + 12);
      if ( v9 == *((_QWORD *)v7 + 10) + 608LL )
        v7 = 0LL;
      else
        v7 = (char *)(v9 - 96);
    }
  }
}
