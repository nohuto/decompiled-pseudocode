/*
 * XREFs of EngCTGetGammaTable @ 0x14020B210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall EngCTGetGammaTable(ULONG ulGamma, const BYTE **pGammaTable, const BYTE **pInverseGammaTable)
{
  const BYTE *v3; // rax
  const BYTE *v4; // rcx

  if ( ulGamma < 0x44C )
  {
    v3 = (const BYTE *)&unk_140351B40;
    v4 = (const BYTE *)&unk_140351B40;
  }
  else if ( ulGamma < 0x4B0 )
  {
    v3 = (const BYTE *)&unk_140358890;
    v4 = (const BYTE *)&unk_140358990;
  }
  else if ( ulGamma >= 0x514 )
  {
    if ( ulGamma >= 0x578 )
    {
      if ( ulGamma >= 0x5DC )
      {
        if ( ulGamma >= 0x640 )
        {
          if ( ulGamma >= 0x6A4 )
          {
            if ( ulGamma >= 0x708 )
            {
              if ( ulGamma >= 0x76C )
              {
                if ( ulGamma >= 0x7D0 )
                {
                  if ( ulGamma >= 0x834 )
                  {
                    if ( ulGamma >= 0x898 )
                    {
                      v3 = (const BYTE *)&unk_140352640;
                      v4 = (const BYTE *)&unk_140352740;
                    }
                    else
                    {
                      v3 = (const BYTE *)&unk_140352C40;
                      v4 = (const BYTE *)&unk_140352D40;
                    }
                  }
                  else
                  {
                    v3 = (const BYTE *)&unk_140351C40;
                    v4 = (const BYTE *)&unk_140351D40;
                  }
                }
                else
                {
                  v3 = (const BYTE *)&unk_140352E40;
                  v4 = (const BYTE *)&unk_140352F40;
                }
              }
              else
              {
                v3 = (const BYTE *)&unk_140352240;
                v4 = (const BYTE *)&unk_140352340;
              }
            }
            else
            {
              v3 = (const BYTE *)&unk_140352A40;
              v4 = (const BYTE *)&unk_140352B40;
            }
          }
          else
          {
            v3 = (const BYTE *)&unk_140352040;
            v4 = (const BYTE *)&unk_140352140;
          }
        }
        else
        {
          v3 = (const BYTE *)&unk_140353040;
          v4 = (const BYTE *)&unk_140353140;
        }
      }
      else
      {
        v3 = (const BYTE *)&unk_140351E40;
        v4 = (const BYTE *)&unk_140351F40;
      }
    }
    else
    {
      v3 = (const BYTE *)&unk_140352840;
      v4 = (const BYTE *)&unk_140352940;
    }
  }
  else
  {
    v3 = (const BYTE *)&unk_140351940;
    v4 = (const BYTE *)&unk_140351A40;
  }
  *pGammaTable = v4;
  *pInverseGammaTable = v3;
}
