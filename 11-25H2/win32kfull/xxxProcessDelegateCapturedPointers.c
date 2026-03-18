/*
 * XREFs of xxxProcessDelegateCapturedPointers @ 0x14014B438
 * Callers:
 *     xxxRealInternalGetMessage @ 0x14011559C (xxxRealInternalGetMessage.c)
 * Callees:
 *     ?xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z @ 0x14014B4C8 (-xxxNotifyCaptureChangeIfCaptured@@YAH_KPEAUtagWND@@H@Z.c)
 */

void __fastcall xxxProcessDelegateCapturedPointers(__int64 a1, struct tagWND *a2, int a3)
{
  _QWORD *v4; // rbx
  __int64 i; // rax
  int v6; // ecx
  unsigned __int64 v7; // rcx

  if ( *(_DWORD *)(a1 + 1244) )
  {
    v4 = (_QWORD *)(a1 + 1208);
    do
    {
      *(_DWORD *)(a1 + 1244) = 0;
      if ( (_QWORD *)*v4 != v4 )
      {
        for ( i = v4[1]; (_QWORD *)i != v4; i = *(_QWORD *)(i + 8) )
        {
          v6 = *(_DWORD *)(i + 48);
          if ( (v6 & 4) != 0 )
          {
LABEL_10:
            *(_DWORD *)(i + 48) = v6 & 0xFFFFFFFB;
            v7 = *(_QWORD *)(i + 24);
            if ( v7 )
            {
              xxxNotifyCaptureChangeIfCaptured(v7, a2, a3);
              if ( (_QWORD *)*v4 != v4 )
              {
                for ( i = v4[1]; (_QWORD *)i != v4; i = *(_QWORD *)(i + 8) )
                {
                  v6 = *(_DWORD *)(i + 48);
                  if ( (v6 & 4) != 0 )
                    goto LABEL_10;
                }
              }
            }
            break;
          }
        }
      }
    }
    while ( *(_DWORD *)(a1 + 1244) );
  }
}
